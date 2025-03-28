// Brute Force Approach | Maximum Subarray Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, -2, 3, 4, -5};
    int maxSum = 0;
    int currSum = 0;

    for (int st = 0; st < n; st++)
    {
       currSum = currSum + arr[st];
       maxSum = max(currSum, maxSum);

       if(currSum < 0) currSum = 0;
       
    }
    cout << maxSum;
}