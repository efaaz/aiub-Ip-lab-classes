#include <iostream>
using namespace std;

class Account{
private:
    string accName;
    int accNum;
    string accType;
    float balance = 0;
public:
    void setAccountDetail(string name, int accnum, string acctype){
        accName = name;
        accNum = accnum;
        accType = acctype;
    }
    void diposit(int amount){
        balance += amount;
    }
    void withdraw(int amount){
        cout<<"Withdrawn amount: "<< amount << endl;
        balance -= amount;
    }
    void transfer(int amount, Account &receiver){
        balance -= amount;
        receiver.diposit(amount);
    }
    void showAccountDetails(){
        cout << "Account Name: " << accName << endl;
        cout << "Account Number: " << accNum << endl;
        cout << "Account Type: " << accType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1;
    a1.setAccountDetail("efaz", 6778, "Savings");
    a1.diposit(10000);
    a1.showAccountDetails();

    a1.withdraw(5000);
    a1.showAccountDetails();

    Account a2;
    a2.setAccountDetail("Sujan", 4889, "Current");
    a1.transfer(2000, a2);

    a1.showAccountDetails();
    a2.showAccountDetails();
    return 0;
}