#include <iostream>
using namespace std;

int main(){
    int x, y, sum = 0;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int *ptr1 = &x;
    int *ptr2 = &y;
    sum = *ptr1 + *ptr2;
    cout << "Sum: " << sum << endl;
}