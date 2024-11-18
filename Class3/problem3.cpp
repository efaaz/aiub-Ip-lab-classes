#include <iostream>
using namespace std;

int main() {
    int inputNum;
    cout << "Enter the size of array: ";
    cin >> inputNum;

    char arr[inputNum];
    char letter;

    cout << "Enter the characters: ";
    for (int i = 0; i < inputNum; i++) {
        cin >> letter;
        arr[i] = letter;
    }

    cout << "Vowels in the array are: ";
    for (int i = 0; i < inputNum; i++) {
        char word = arr[i];
        if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' ||
            word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U') {
            cout << word << " ";
        }
    }
    cout << endl;

    return 0;
}