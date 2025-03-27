#include <iostream>
using namespace std;

int LinearSearch(int arr[], int siz, int target)
{

    for (int i = 0; i < siz; i++)
    {
        if (arr[i] == target)
        {
            cout << "Present target: " << arr[i] << " at index: " << i << endl;
        }
    }
   cout<<"Not Found"<<endl;
   return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int siz = sizeof(arr) / sizeof(int);
    int target = 80;

    LinearSearch(arr, siz, target);

    return 0;
}