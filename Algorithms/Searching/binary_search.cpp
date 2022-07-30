#include<bits/stdc++.h>
using namespace std;

//using iterative method
int Binary_Search(int *arr,int n, int target)
{
    int low=0,high=n-1;
    while (low <= high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            return target;
        }
        else if(arr[mid] > target)
        {
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }   
    return -1;
}

//binary Search using recursion
int BS(int *arr,int low,int high,int target){
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(arr[mid]==target){
        return target;
    }
    else if(arr[mid] > target){
        BS(arr,low,mid-1,target);
    }
    else {
        BS(arr,mid+1,high,target);
    }
}

int main()
{
    int arr[]={1,3,6,7,8,12,42,100,121,123,153};
    //cout<<Binary_Search(arr,sizeof(arr)/sizeof(arr[0]),153);
    cout<<BS(arr,0,sizeof(arr)/sizeof(arr[0])-1,155);

}