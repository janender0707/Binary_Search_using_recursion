#include<iostream>
using namespace std;

int BinarySearch(int arr[],int a,int b,int key,int n)
{
    int mid;
    mid=(a+b)/2;
    if(a>b){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
    return BinarySearch(arr,mid+1,b,key,n);
    }
    if(key<arr[mid]){
        return BinarySearch(arr,a,mid-1,key,n);
    }
}

int main()
{
    int arr[100];
    int n,key;
    cin>>n;
    int a=0;
    int b=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<BinarySearch(arr,a,b,key,n);
    return 0;
}
