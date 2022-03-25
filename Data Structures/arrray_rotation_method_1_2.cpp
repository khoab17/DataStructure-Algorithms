#include <iostream>
using namespace std;

void leftByOne(int *arr,int n){
  int temp=arr[0];
  for(int i=0;i<n-1;i++)
  {
    arr[i]=arr[i+1];
  }
  arr[n-1]=temp;
}

void arrayLeftRotation(int *arr,int index,int n)
{
  for(int i=0;i<index;i++)
  {
    leftByOne(arr,n);
  }
}

void printArray(int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }
}

int main() {

  int arr[]={1,2,3,4,5,6,7};
  int size=sizeof(arr)/sizeof(arr[0]);
  arrayLeftRotation(arr,3,size);
  printArray(arr,size);
  
  return 0;
}
