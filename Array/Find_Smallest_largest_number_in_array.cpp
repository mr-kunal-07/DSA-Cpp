#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int siz = sizeof(nums) / sizeof(int);

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for (int i = 0; i < siz; i++)
    {
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // }
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout<<"smallest = " << smallest << endl;
    cout<<"largest = " << largest;

    return 0;
}