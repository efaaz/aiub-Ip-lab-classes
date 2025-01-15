#include <iostream>
using namespace std;

struct student
{
    int uniqueID;
    int credits;
    float cgpa;
};
int main()
{
    int numStudents = 10;
    student studentsArr[numStudents] = {
        {56, 10, 3.89},
        {89, 20, 3.67},
        {378, 30, 4.00},
        {80, 40, 3.25},
        {57, 50, 2.89},
        {678, 60, 3.67},
        {768, 70, 3.67},
        {89, 80, 3.78},
        {990, 90, 3.56},
        {10, 100, 3.00},
    };

    cout << "Student with cgpa greater than 3.75 " << endl;
    for (int i = 0; i < numStudents; i++)
    {
        if (studentsArr[i].cgpa > 3.75)
        {
            cout << "Unique ID: " << studentsArr[i].uniqueID << endl;
        }
    }

    cout << "Student with credits greater than 50 " << endl;
    for (int i = 0; i < numStudents; i++)
    {
        if (studentsArr[i].credits > 50)
        {
            cout << "Unique ID: " << studentsArr[i].uniqueID << endl;
        }
    }

    return 0;
}
