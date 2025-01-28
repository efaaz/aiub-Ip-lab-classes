#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    char arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    char* ptr = arr;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *(ptr + i) << " ";
    }
    
}