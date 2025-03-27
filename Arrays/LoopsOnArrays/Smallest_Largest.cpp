#include <iostream>
using namespace std;

int main()
{
    int nums[] = {3, 4, 45, 78, 2, 45, -3};
    int size = sizeof(nums) / sizeof(int);

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < size; i++)
    { // min, max
        // if (nums[i] < smallest){
        //     smallest = nums[i];
        // }    insted of this we can use min or max

        smallest = min(nums[i], smallest);
        smallestIndex = i;
        if (nums[i] > largest)
        {

            largest = max(nums[i], largest);
            largestIndex = i; 
        }

        ;
    }

    cout << "smallest = " << smallest << ", Index = " << smallestIndex << endl;
    cout << "largest = " << largest << ", Index = " << largestIndex;

    return 0;
}