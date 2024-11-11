#include <iostream>
using namespace std;
int main()
{

    int inputNum, sum = 1;
    cout << "Enter number" << endl;
    cin >> inputNum;

    for (int i = 1; i <= inputNum; i++)
    {
        sum = sum * i;
    }
    cout << sum << endl;
    return 0;
}