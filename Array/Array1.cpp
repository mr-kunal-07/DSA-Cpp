#include <iostream>
using namespace std;

int main()
{
    int marks[] = {1, 2, 3, 4, 5};
    int siz = sizeof(marks) / sizeof(int);

    for (int i = 0; i < siz; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}