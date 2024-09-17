#include <iostream>
using namespace std;
// Sum of all odd numbers from 1 to N

int main()
{
    int n = 5;
    int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum = sum + i;
    //     }
    // }

    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        i++;
    }

    cout << sum;
}