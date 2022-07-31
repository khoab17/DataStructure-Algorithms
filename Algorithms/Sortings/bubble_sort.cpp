#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int *temp=a;
    b=a;
    a=temp;
}

void bubble_sort(int *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }    
}

int main()
{
    int arr[]={2,1,5,7,3,8,6,10,9};
    bubble_sort(arr, sizeof(arr)/sizeof(arr[0]));

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}