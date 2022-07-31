#include<bits/stdc++.h>
using namespace std;


//self try (only works for positive integers)
void CountingSort(int *arr,int n,int max)
{
    int temp[max+1];
    memset(temp,0, (max+1)*4);
    
    for(int i=0; i<n; i++){
        temp[arr[i]]=temp[arr[i]]+1;
    }
    
    for(int i=1; i<max+1; i++)
    {
        temp[i]=temp[i-1]+temp[i];
    }

    int narr[n];

    for(int i=0; i<n; i++)
    {
        narr[temp[arr[i]]]=arr[i];
        temp[arr[i]]=temp[arr[i]]-1;
    }

    for(int i=1; i<n+1; i++)
    {
        arr[i-1]=narr[i];
    }

}

int main()
{
    int arr[]={9,9,8,7,6,5,4,3,2,1,10,20,40,30,-1};
    
    int size=sizeof(arr)/sizeof(arr[0]);

    CountingSort(arr,size,40);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}