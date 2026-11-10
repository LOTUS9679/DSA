#include<iostream>
using namespace std;
int main(){
     int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int maxSum=INT_MIN;
      for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxSum=max(maxSum,currsum);
        }
      }
    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}