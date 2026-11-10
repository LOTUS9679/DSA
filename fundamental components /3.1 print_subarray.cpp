#include <iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
}
void subarrays(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}
int main()
{
    //reversing the array
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
     printArray(arr,n);
     cout<<endl;
    subarrays(arr,n);
   
    return 0;
}
