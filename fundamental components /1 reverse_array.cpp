#include <iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    //reversing the array
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    // int arrCopy[n];
    // for(int i=0;i<n;i++){
    //   int  j=n-i-1;
    //     arrCopy[i]=arr[j];
    // }
    // for(int i=n;i>=0;i--){
    //     arr[i]=arrCopy[i];
    // }
    int i=0,j=n-1;
    while(i<j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
        i++;
        j--;
    }
    printArray(arr,n);

    return 0;
}
