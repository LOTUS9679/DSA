#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            int sum = 0;

            for(int k = start; k <= end; k++)
            {
                sum += arr[k];
            }

            maxSum = max(maxSum, sum);
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum;

    return 0;
}