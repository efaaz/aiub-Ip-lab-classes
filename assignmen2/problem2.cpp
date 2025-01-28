#include <iostream>
using namespace std;

int findLargest(int array[], int size){
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int findSmallest(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Largest Number: " << findLargest(arr, size) << endl;
    cout << "Smallest Number: " << findSmallest(arr, size) << endl;
}