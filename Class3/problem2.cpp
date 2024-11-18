#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int arr1[size] = {1, 2, 3, 4, 5, 6};
    int arr2[size] = {6, 5, 4, 3, 2, 1};
    int result = 1;

    cout << "Result of multi: ";
    for (int i = 0; i < size; ++i)
    {
        result = arr1[i] * arr2[size- i-1];
        cout << result <<endl;
    }
    return 0;
}