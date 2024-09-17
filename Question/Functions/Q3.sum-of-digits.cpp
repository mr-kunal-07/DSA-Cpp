// Calculate sum of digits of a number

#include <iostream>
using namespace std;

// example 145 % 10 = 5 => in Question-14 and in remainder is 5

int sumOfDigits(int num)
{
    int digitsum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10; //Last digit
        num = num / 10;  // Remainder
        digitsum = digitsum + lastdigit;
    }
        return digitsum;
}

int main()
{
    cout << sumOfDigits(142) << endl;

    return 0;
}