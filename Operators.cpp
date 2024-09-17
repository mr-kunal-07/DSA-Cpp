#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << (a + b) << endl; // Add
    cout << (a - b) << endl; // Sub
    cout << (a * b) << endl; // Product
    cout << (a / b) << endl; // Division
    cout << (a % b) << endl; // Modelo || Remender

    cout << (3 < 5) << endl;  // true -> 1
    cout << (3 > 5) << endl;  // false -> 0
    cout << (3 <= 5) << endl; // true -> 1
    cout << (3 >= 5) << endl; // false -> 0
    cout << (3 == 5) << endl; // false -> 0
    cout << (3 != 5) << endl; // true -> 1

    cout << !(3 != 5) << endl;           // NOT
    cout <<( (3 > 1) || (3 > 5) )<< endl; // OR
    cout <<( (3 > 1) && (3 > 5) )<< endl; // AND

    


    return 0;
}