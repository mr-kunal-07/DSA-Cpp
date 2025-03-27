// two Pointer approch

// Reverse an array

#include <iostream>
using namespace std;

int ReverceArr(int arr[], int siz)
{
    int st = 0;
    int end = siz - 1;

    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int siz = sizeof(arr) / sizeof(int);

    ReverceArr(arr, siz);

    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}