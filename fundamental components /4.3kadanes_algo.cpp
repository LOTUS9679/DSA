#include<iostream>
#include <climits>  // For INT_MIN
#include <algorithm> // For max()
using namespace std;
int main(){
     int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int maxSum=INT_MIN;
    int currsum=0;
      for(int start=0;start<n;start++){
        currsum+=arr[start];
        maxSum=max(maxSum,currsum);
        if(currsum<0){
            currsum=0;
        }
      }
    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}