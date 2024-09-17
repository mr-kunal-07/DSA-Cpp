#include <iostream>
using namespace std;

int main()
{
    //Type Converssion
    char grade = 'A'; // 65 asky value
    int val = grade;
    cout << val << endl;

    //Type Casting 
    double price = 100.99;

    int newPrice = (int)price; //100
    cout << newPrice << endl;

    return 0;
}