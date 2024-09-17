#include <iostream>
using namespace std;

int main()
{
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // char num = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num;
    //     }
    //     num++;
    //     cout << endl;
    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // int n = 4; // Reverce Patten
    // for (int i = 0; i<n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    int n = 4; // Floyd's Triangle Patten
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}