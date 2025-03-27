#include <iostream>
using namespace std;

int BinTODec(int BinNum)
{
    int ans = 0;
    int pow = 1;

    while (BinNum > 0)
    {
        int rem = BinNum % 10;
        ans += rem * pow;

        BinNum /= 10;
        pow *= 2;
    }

    cout << ans << endl;
}
int main()
{

    BinTODec(101);

    return 0;
}