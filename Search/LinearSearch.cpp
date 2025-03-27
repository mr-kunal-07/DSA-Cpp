#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; //Found
        }
    }
    return -1; // not found
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 80;
    int size = sizeof(arr) / sizeof(int);

    cout<< linearSearch(arr, size, target) << endl;
    return 0;
}