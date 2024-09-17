#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++) // Lines
    {
        int n = 10;
        for (int j = 1; j <= n; j++) // woek in a line
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}