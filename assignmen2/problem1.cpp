#include <iostream>
using namespace std;
bool findPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

void printPrime(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        if (findPrime(i))
        {
            cout << i << ", ";
        }
    }
}

int main(){
    int n, m;
    cout << "Enter Numbers: ";
    cin >> n >> m;
    cout << "Prime numbers: ";
    printPrime(n, m);
    return 0;
}
