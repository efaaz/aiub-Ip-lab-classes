#include <iostream>
using namespace std;

class Mobile{
private:
    string ownerName;
    int phnNum;
    bool islock;
    string osName;
    float Mbalance;
    float callRate = 0.5;

public:
    void setAccountDetail(string name, int num, string ostype, bool lock){
        ownerName = name;
        phnNum = num;
        osName = ostype;
        islock = lock;
    }
    void recharge(int amount){
        if (islock == false){
            Mbalance += amount;
        }
        else{
            cout << "Phone is locked please unlock the phone to recharge" << endl;
        }
    }
    void callSomeone(int duration){
        if (islock == false){
            cout << "Call Duration: " << duration << " minutes" <<" cost: "<< duration*callRate <<" Tk"<< endl;
            Mbalance -= duration * callRate;
        }
        else{
            cout << "Phone is locked please unlock the phone to call" << endl;
        }
    }
    void showAccountDetails(){
        if (islock == false){
            cout << "Mobile Owner Name: " << ownerName << endl;
            cout << "Phone Number: " << phnNum << endl;
            cout << "Os Type: " << osName << endl;
            cout << "Mobile Balance: " << Mbalance << endl;
        }
        else{
            cout << "Phone is locked please unlock the phone to show details" << endl;
        }
    }
};

int main(){
    Mobile m1;
    m1.setAccountDetail("efaz", 19777898, "Android", false);
    m1.recharge(50);
    m1.showAccountDetails();
    m1.callSomeone(20);
    m1.showAccountDetails();
    return 0;
}