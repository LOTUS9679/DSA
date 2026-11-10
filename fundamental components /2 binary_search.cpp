//binary serach 
#include <iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
}
int binarySearch(int *arr,int n,int key)
{
    int i=0,j=n-1;
    while(i<j){
        int mid=(i+j)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return -1;
}
int main()
{
    //binary serach
    int arr[]={3,5,7,9,12,34,56,78};
    int x;
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter the key to search =";
    cin>>x;
    int result=binarySearch(arr,n,x);
    if(result!=-1){
        cout<<result;
    }
    else{
        cout<<"result not found";
    }


    return 0;
}
