#include <iostream>
using namespace std;
int main()
{
    int inputNum, nextTerm, n1 = 0, n2 = 1;
    cout << "Enter number" << endl;
    cin >> inputNum;
    nextTerm = n1 + n2;
    cout << "Fibonacci seriesn " << n1 << " " << n2 << " ";

    for (int i = 3; i <= inputNum; i++)
    {

        nextTerm = n1 + n2;
        cout << nextTerm;
        cout << " ";
        n1 = n2;
        n2 = nextTerm;
    }
    return 0;
}