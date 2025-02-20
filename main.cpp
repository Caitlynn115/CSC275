/****************************************************
 ** Author: Caitlynn Johnson
 ** Program: Homework 2
 ** Date Created: February 20th, 2025
 ** Date Last Modified: February 20th, 2025
 ** Usage: No Command Line Arguments
 ** Problem: Create a checkbook using a struct and class that can double in size
 when needed. Write out small checks. Create random memos. Display all checks via
 overloaded operator.
 *****************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int N = 100;

struct Check {
    int CheckNum;
    float CheckAmount;
    string CheckMemo;

    bool operator > (float value) const {
        return CheckAmount > value;
    }

    friend std::ostream& operator << (std::ostream os, const Check & check) {
        os << "Check Number: " << check.CheckNum << ", Memo: " << check.CheckMemo << ", Amount: $" << check.CheckAmount;
        return os;
    }
};

class Checkbook {
    public:

    float balance;
    float lastDeposit;
    int numOfChecks;
    int checkBookSize;
    Check *chkPtr;
    Check checkArray[N];

    CheckBook(): balance(0),  numOfChecks(0), checkBookSize(4), chkPtr(nullptr){}
    CheckBook(float balance_amount): balance(balance_amount), numOfChecks(0), checkBookSize(2), chkPtr(nullptr) {}

    CheckBook() {
        delete[] chkPtr;
    }

CheckBook(const CheckBook & other) {
        balance = other.balance;
        numOfChecks = other.numOfChecks;
        checkBookSize = other.checkBookSize;
        lastDeposit = other.lastDeposit;

        chkPtr = new Check[checkBookSize];
        for (int i = 0; i < checkBookSize; i++) {
            chkPtr[i] = other.chkPtr[i];
        }
    }

void depositt(float amount) {
        balance += amount;
    }

void displayChecks() {
        for (int i = numOfChecks - 1; i >= 0; i--) {
            cout << checkArray[i];
        }
    }

string memos[3] = {"Groceries", "Swimming Lessons", "Takeout"};

    bool writeCheck(float amount) {
        cout << "\nCurrent Number Of Checks: " << numOfChecks;
        cout << "Current Balance: $" << balance;

        if (numOfChecks == checkBookSize /2) {
            int newSize = checkBookSize * 2;
            Check* newCheckArray = new Check[newSize];
            for (int i = 0; i < numOfChecks; i++) {
                newCheckArray[i] = checkArray[i];
            }
        }

chkPtr = newCheckArray;
checkBookSize = newSize;

        cout << "/nWarning- Check Book Is Half Full, A New Check Book Has Been Ordered" << newSize;

    }

    if(amount <= balance){
        checkArray[numOfChecks].CheckAmount = amount;
        checkArray[numOfChecks].CheckNum = numOfChecks;
        checkArray[numOfChecks].CheckMemo = Memos[rand() % 3];

        balance -= amount;
        numOfChecks += 1;
    }else{
        return false;
    }
}
};

void checkTest(CheckBook & checkBook) {


    while (checkBook.balance > 0) {
        if (checkBook.writeCheck(25)) {
            cout << "\nCheck Of $" << 25 << " Successfully Written.";
            checkBook.balance -= 25;
        } else {
            cout << "Insufficient Balance To Write a Check Of $" << 25;
            break;
        }

        cout << "Displaying All Checks: ";
        checkBook.displayChecks();
    }
}

int main() {
    srand(time(0));

    CheckBook cb1;

    cb1.deposit(500);

    checkTest(cb1);
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.