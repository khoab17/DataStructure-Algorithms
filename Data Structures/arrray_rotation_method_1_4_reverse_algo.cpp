 #include <iostream>
using namespace std;

void reverse(int *arr,int start , int end)
{
  while(start<end)
  {
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;end--;
  }
}

void rotateleft(int *arr,int d,int n){
  if(d==0) return;
  d=d%n;
  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
}

int main()
{
  int arr[]={1,2,3,4,5};
  int size =sizeof(arr)/sizeof(arr[0]);

  rotateleft(arr,2,size);

  for(int i=0;i<size;i++)
  {
    std::cout << arr[i] << ' ';
  }

}
