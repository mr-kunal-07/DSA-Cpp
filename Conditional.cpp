#include <iostream>
using namespace std;

int main()
{
    // if else
    int age;
    cout << "Enter Your Age : ";
    cin >> age;
    if (age >= 18)
        cout << "You Can Vote\n";
    else
        cout << "You Cannot Vote\n";

    // if else-if else
    int marks;
    cout << "Enter Your Marks :";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "A\n";
    }
    else if (marks >= 80 && marks <= 90)
    {
        cout << "B\n";
    }
    else
    {
        cout << "C\n";
    }

    // Ternary Statement
    // condition ? str1 : str 2;
    int num = -1;
    cout << (num >= 0 ? "Positive" : "Negitive");

    return 0;
}