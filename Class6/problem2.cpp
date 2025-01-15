#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    int phoneNumber;
    string address;

public:
    void addNameandRoll(string n, int roll)
    {
        name = n;
        rollNumber = roll;
    }
    void phoneNumandAddress(int phone, string add)
    {
        phoneNumber = phone;
        address = add;
    }

    void printDetails()
    {
        cout << "Roll number: " << rollNumber << endl;
        cout << "Phone number: " << phoneNumber << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{

    Student obj1, obj2;

    obj1.addNameandRoll("John", 2222);
    obj1.phoneNumandAddress(1234, "Cumilla City");
    obj1.printDetails();

    obj2.addNameandRoll("Sam", 3333);
    obj2.phoneNumandAddress(987654, "Dhaka City");
    obj2.printDetails();

    return 0;
}
