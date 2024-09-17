#include <iostream>
using namespace std;
// Check if a number is pime or not

int main()
{
    int n = 12;
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime = true)
    {
        cout << n << " is Prime Number" << endl;
    }
    else
    {
        cout << n << " is Prime Not Number" << endl;
    }

    //There is better aproche to solve this using fectors like i*i <=n

    return 0;
}