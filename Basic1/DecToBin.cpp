#include <iostream>
using namespace std;

int DecToBin(int decNum)
{
    int ans = 0;
    int pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;

        ans += (rem * pow);
        pow = pow * 10;
    }
    cout << ans <<endl;
}
int main()
{

    for (int i = 0; i < 10; i++)
    {
        DecToBin(i);
    }

    return 0;
}