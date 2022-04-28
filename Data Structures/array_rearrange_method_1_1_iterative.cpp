#include <iostream>
using namespace std;

void rearrangeArray(int *arr,int n)
{
  for(int i=0; i < n; i++)
  {
    for(int j=0; j< n; j++)
    {
      if(arr[j]==i)
      {
        int temp =arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        break;
      }
    }
  }

  for(int i=0; i <n; i++)
  {
    if(arr[i] != i)
    arr[i]=-1;
  }

}


int main()
{
  int arr []={ -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
  int n=sizeof(arr)/sizeof(arr[0]);
  rearrangeArray(arr,n);
  for(int i=0; i < n; i++)
  {
    std::cout << arr[i] << ' ';
  }
}
