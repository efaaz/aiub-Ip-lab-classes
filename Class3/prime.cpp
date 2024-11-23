#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    for (num; num > 1; num--)
    {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime) // If the number is prime
        {
            cout << "The last prime number is: " << num << endl;
            break;
        }
    }
    return 0;
}
