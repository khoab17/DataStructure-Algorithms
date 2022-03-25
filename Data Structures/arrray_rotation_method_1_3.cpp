#include <iostream>
using namespace std;

int gcd(int x,int y)
{
  if(y==0){
    return x;
  }
  else return gcd(y,x%y);
}

void leftRoatate(int *arr,int d,int n)
{
  d=d%n; //to ensure d not exceed n
  int gcdVal=gcd(d,n);

  for(int i=0;i<gcdVal;i++)
  {
    int temp=arr[i];
    int j=i;

    while(true)
    {
      int k=j+d;
      if(k>=n)
      {
        k=k-n;
      }
      if(k==i) break;

      arr[j]=arr[k];
      j=k;
    }

    arr[j]=temp;
  }
}

void printArray(int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }
}

int main(){

  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
  int size=sizeof(arr)/sizeof(arr[0]);


  leftRoatate(arr,3,size);
  printArray(arr,size);


}
