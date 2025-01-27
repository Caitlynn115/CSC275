#include <iostream>
#include <cstdlib>

using namespace std;

class ATM {
    int numOfTransactions;
    float balance;
public:
    ATM(int numOfTransactions, float balance)
    {
        this->balance = balance;
        this->numOfTransactions = numOfTransactions;
    }

    ATM() {
    }

    void initialBalance(float amount) {
        numOfTransactions = 0;
        balance = amount;
    }

    void showBalance() {
        cout <<"Current Balance: "<<balance;
    }

    void deposit(float amount) {
        numOfTransactions++;
        balance += amount;
    }

    bool withdrawal(float amount) {
        if ( (balance - amount) >= 0 ) {
            numOfTransactions++;
            balance = balance - amount;
            return true;
        }
        return false;
    }

    int getTransactions() {
        return(numOfTransactions);
    }
};
     int main() {

         ATM atm_obj;
         atm_obj.initialBalance(250);
         atm_obj.showBalance();
         atm_obj.deposit(250);
         atm_obj.showBalance();

              if (atm_obj.withdrawal(100)) {
                  cout <<"Completed";
                  atm_obj.showBalance();
              }

              else {
                  atm_obj.showBalance();
                  cout <<"Insufficient Balance";
         }

         cout<<"Number Of Transactions= "<<atm_obj.getTransactions();
     }