// Brute Force Approach | Maximum Subarray Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = { 1, 2, 3, 4, -5};
    int maxSum = 0;

    for (int st = 0; st < n; st++)
    {
        int arrSum = 0;
        for (int end = st; end < n; end++)
        {
            arrSum = arrSum + arr[end];

           maxSum = max(maxSum, arrSum);
        }
    }
    cout << maxSum;   
}