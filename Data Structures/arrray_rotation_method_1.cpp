#include <iostream>
using namespace std;

void leftRotate(int* arr,int index,int n)
{
  int temp[index]={};
  for (int i=0;i<index;i++)
  {
    temp[i]=arr[i];
  }
  for(int i=0;i<n-index;i++)
  {
    arr[i]=arr[i+index];
  }
  int flag=0;
  for(int i=n-index;i<n;i++)
  {
    arr[i]=temp[flag];
    flag++;
  }
}

void printArray(int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }
}

int main()
{
  int arr[]={1,2,3,4,5,6,7};
  int size=sizeof(arr)/sizeof(arr[0]);
  leftRotate(arr,2,size);
  printArray(arr,size);
}
