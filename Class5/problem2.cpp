#include <iostream>
using namespace std;
struct empolyee
{
    int id;
    string name;
    string designation;
    char gender;
    int salary;
    string joiningDate;
};
int main()
{
    int empoloyeeNumbers = 10;
    empolyee empoloyeeArr[empoloyeeNumbers] = {
        {56, "mahin", "manager", 'M', 500800, "12/12/2020"},
        {89, "sakib", "ceo", 'F', 5000, "12/12/2020"},
        {378, "nahian", "enginer", 'F', 89000, "12/12/2020"},
        {378, "sadif", "manager", 'M', 9000, "12/12/2020"},
        {378, "mahi", "manager", 'F', 8000, "12/12/2020"},
        {378, "mim", "manager", 'M', 8000, "12/12/2020"},
        {378, "Sadika", "manager", 'F', 25000, "12/12/2020"},
        {378, "Hafsa", "manager", 'F', 7000, "12/12/2020"},
        {378, "mahi", "manager", 'M', 85000, "12/12/2020"},
        {378, "billu", "manager", 'F', 8000, "12/12/2020"},
    };

    cout << "Printing the details of all male empoloyees " << endl;
    for (int i = 0; i < empoloyeeNumbers; i++)
    {
        if (empoloyeeArr[i].gender == 'M')
        {
            cout << "ID: " << empoloyeeArr[i].id << endl;
            cout << "Name: " << empoloyeeArr[i].name << endl;
            cout << "Designation: " << empoloyeeArr[i].designation << endl;
            cout << "Gender: " << empoloyeeArr[i].gender << endl;
            cout << "Salary: " << empoloyeeArr[i].salary << endl;
            cout << "Joining Date: " << empoloyeeArr[i].joiningDate << endl;
        }
    }
    cout << "Printing the details of Female empoloyees " << endl;
    for (int i = 0; i < empoloyeeNumbers; i++)
    {
        if (empoloyeeArr[i].gender == 'F')
        {
            cout << "ID: " << empoloyeeArr[i].id << endl;
            cout << "Name: " << empoloyeeArr[i].name << endl;
            cout << "Designation: " << empoloyeeArr[i].designation << endl;
            cout << "Gender: " << empoloyeeArr[i].gender << endl;
            cout << "Salary: " << empoloyeeArr[i].salary << endl;
            cout << "Joining Date: " << empoloyeeArr[i].joiningDate << endl;
        }
    }
    cout << "empoloyees with salray > 20000 " << endl;
    for (int i = 0; i < empoloyeeNumbers; i++)
    {
        if (empoloyeeArr[i].salary > 20000)
        {
            cout << "ID: " << empoloyeeArr[i].id << endl;
            cout << "Name: " << empoloyeeArr[i].name << endl;
            cout << "Designation: " << empoloyeeArr[i].designation << endl;
            cout << "Gender: " << empoloyeeArr[i].gender << endl;
            cout << "Salary: " << empoloyeeArr[i].salary << endl;
            cout << "Joining Date: " << empoloyeeArr[i].joiningDate << endl;
        }
    }

    cout << "Student with credits greater than 50 " << endl;

    return 0;
}
