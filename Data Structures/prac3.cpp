#include <iostream>
#include <vector>
using namespace std;

void solve(string str,int max)
{
  //std::cout << max << '\n';
  int flag=1;
  for(int ii=0;ii<max;ii++) std::cout <<" ";

  for(int l=0;l<str.length()-1;l++)
  {
    if(str[l]!='\n')
    std::cout <<str[l]<<" ";
    else
    {
      std::cout << '\n';
      for(int i=0;i<max-flag;i++)
      {
        std::cout << " ";
      }
      flag++;
      //std::cout << str[l];
    }
  }
}


int main()
{
  string str="1\n12\n123\n1234\n12345\n";
  int max=int(str[str.length()-2])-48;

  solve(str,50);

  // vector <int> vec={1,2,3,4,5};
  // vector <int> v;
  // v.push_back(1);
  // v.push_back(11);
  // v.push_back(13);
  // for(int i:v)
  // {
  //   cout<<i<<" ";
  // }
}
