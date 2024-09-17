#include <iostream>
using namespace std;

int main()
{
    // int n = 4;    
    // for (int i = 1; i <= n; i++) // how many Lines
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++) // print in one line
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }



    // int n = 3;    
    // int number = 1;
    // for (int i = 0; i < n; i++) // how many Lines
    // {
    //     for (int j = 0; j < n; j++) // print in one line
    //     {
    //         cout << number;
    //         number++;
    //     }
    //     cout << endl;
    // }


    int n = 3;    
    char ch = 'A';
    for (int i = 0; i < n; i++) // how many Lines
    {
        for (int j = 0; j < n; j++) // print in one line
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }



}