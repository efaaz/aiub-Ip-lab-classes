#include <iostream>
using namespace std;

int main()
{
    int size = 5;

    int arr[size];
    int num;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << ++i<< ": ";
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < size; i++)
    {
        int word = arr[i];
        if (word % 2 == 0)
        {
            arr[i] = 0;
        }
        else if (word % 2 != 0)
        {
            arr[i] = 1;
        }
    }
    cout << "Values in array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        }

    return 0;
}