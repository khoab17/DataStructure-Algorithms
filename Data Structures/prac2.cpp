#include <iostream>
using namespace std;

int guess(int n)
{
  int num=2;
  if(n==num) return 0;
  else if(n>num) return -1;
  else return 1;
}

int guessNumber(int n) {

        int mid=n/2;
        int high=n;
        int low=0;
        while (true)
        {
          if(guess(mid)==0) return mid;
          else if(guess(mid)==-1){
            mid=mid/2;
            high=(mid/2)-1;
          }
          else {
            mid=(high-low)/2;
            high=(mid/2)-1;
          }
        }
    }

int main()
{
  //int n=8;
  //std::cout << guessNumber(10) << '\n';
  int a=50;
  int &b=a;
  a=100;
  b=50;
// cout<<a<<" "<<--b;

  char *ptr;
  char string[]="hello world!";
  ptr =string;
  ptr+=6;

  char arr[]={'x','Y','z','I','J','K'};
  int size=sizeof(arr)/sizeof(arr[0]);
//  cout<<size;


int temp=100;
int &temp2=temp;
temp=1000;
temp2=500;
std::cout << temp<< '\n';
}
