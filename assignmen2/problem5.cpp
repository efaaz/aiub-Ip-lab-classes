#include <iostream>
using namespace std;

int *modifiedArray(int *arr, int size){
    int *modifidArr = new int[size];
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            modifidArr[i] = arr[i] + 3;
        }
        else{
            modifidArr[i] = arr[i] * 2;
        }
    }
    return modifidArr;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }

    int *arr = array;
    int *newArr = modifiedArray(arr, size);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Modified Array: ";
    for (int i = 0; i < size; i++){
        cout << newArr[i] << " ";
    }
}