#include<bits/stdc++.h>
using namespace std;

void swap(int *a , int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=temp;
}

//solving last element as pivot element

int partition(int *arr, int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j=high;

    while(low <high)
    {

    }

    return 0;
}


//solved using first element of the array as pivot 

int partition_first(int *arr, int low, int high)
{
    int pivot=arr[low];
    int i=low,j=high;

    while(i < j)
    {
        while(pivot >= arr[i])
            i++;
        while (pivot < arr[j])
            j--;
        
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void QuickSort(int *arr, int low,int high)
{
    if(low < high)
    {
        int p=partition_first(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);
    }
}

int main()
{
    int arr[]= {4, 2, 8, 3, 1, 5, 7,11,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr,0,size-1);
     cout<<"sorted list:"<<endl;
    for(int  i=0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}