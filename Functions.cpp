#include <iostream>
using namespace std;

// Parametres in Function
int sum(int a, int b)
{
    int s = a + b;
    return s;
}

// min of 2
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    // function call
    cout << sum(10, 3) << endl;
    cout << "min = " << min(6, 41) << endl;//arguments
}
