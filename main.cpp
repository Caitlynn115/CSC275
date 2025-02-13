#include <iostream>
#include <string>

using namespace std;

//Define the structure
struct Check {
private:
    string CheckMemo;
    int CheckNum;
    float CheckAmount;
    static int number;

public:
    Check(): CheckNum(0), CheckMemo(""), CheckAmount(0) {
    }


    int getCheckNum();
    const {
     return CheckNum;
    }
    void setCheckNum(int num);
{
    CheckNum = num;

}


    string getCheckMemo();
    const {
     return CheckMemo;
    }
    void setCheckMemo(string memo);
{
    CheckMemo = memo;
}

    float getCheckAmount();
    const {
     return CheckAmount;
    }
    void setCheckAmount(float amount);
{
    CheckAmount = amount;
}
};

// Define Class
class CheckBook {
private:
    const int checkLimit;
    static int allChecks;
    int numOfChecks;
    float lastDeposit;
    float balance;
    Check checks[N];

public: CheckBook(): numOfChecks(0), lastDeposit(0), balance(0), checkLimit(N){}

    Checkbook(float initialBalance): lastDeposit(0), numOfChecks (0), balance(initialBalance), checkLimit(N){}

    void deposit(float amount) {
    balance += amount;
    lastDeposit = amount;
}

    //Displays Checks In Order
    void displayChecks() {
    cout <<"Check History: ";;
    for (int i = numOfChecks - 1; i >= 0; i--) {
        cout << checks[i].getCheckAmount() << "\t" << checks[i].getCheckNum() << "\t" << checks[i].getCheckMemo();
    }
}

    //Checks Amount Of Balance
    bool writeCheck(float amount) {
    if (amount <= balance && numOfChecks < checkLimit && allChecks < 10) {
        cout << "Balance: ";
        cout << "Check Details: ";
        cout << "Memo: ";
        string memo;
        cin >> memo;

        checks[numOfChecks].setCheckMemo(memo);
        checks[numOfChecks].setCheckNum(numOfChecks + 1);
        checks[numOfChecks].setCheckAmount(amount);

        balance -= amount;
        numOfChecks++;
        allChecks++;

        return true;
    }
    else
        return false;
}

    static int getallChecks() {
    return allChecks;
}
};

int CheckBook::allChecks = 0;


//Takes Input and Displays Result
int main()
{
    CheckBook cb1(1000), cb2(500);
    for(int i=0; i<10;i++)
    {
        cb1.writeCheck(150);
        cb2.writeCheck(130);
    }
    cout<<"cb1 check details";
    cb1.displayChecks();
    cout<<"cb2 check details";
    cb2.displayChecks();
    cout<<cb1.getallChecks();
    cout<<cb2.getallChecks();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.