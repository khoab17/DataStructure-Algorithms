#include <iostream>
using namespace std;

void reverseArray(int *arr,int n)
{
  int start =0;
  int end=--n;
  while(start<end)
  {
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}

int main()
{
  int arr[]={1,2,3,4,5};
  reverseArray(arr,sizeof(arr)/sizeof(arr[0]));
  for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {
    std::cout << arr[i] << ' ';
  }
}
