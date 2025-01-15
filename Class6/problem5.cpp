#include <iostream>
using namespace std;

class Empolyee
{
private:
    string name;
    int yearOfJoining;
    int salary;
    string address;

public:
    void setValue(string n, int yfj, int sal, string add )
    {
        name = n;
        yearOfJoining = yfj;
        salary = sal;
        address = add;
    }
    void printDetails()
    {
        cout<< name << "     "<< yearOfJoining<< "           "<< address << endl; 
    }
};

int main()
{

    Empolyee emp1, emp2, emp3;

    emp1.setValue("john", 2023, 50000, "Dhaka");
    emp2.setValue("main", 2020, 12000, "Dhaka");
    emp3.setValue("Nhin", 2019, 5000, "Dhaka");
    cout << "Name "<<" Year of joining "<<" Address "<< endl;
    emp1.printDetails();
    emp2.printDetails();
    emp3.printDetails();

    return 0;
}
