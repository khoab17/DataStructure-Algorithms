#include <iostream>
using namespace std;

int solve(int m,int n,string s,string sub)
{
    int length=sub.length();
    int res=0;

    for(int i=m-1;i<=n-length;i++)
    {
        if(s.substr(i,length)==sub)
        { 
            //cout<<"found"<<s.substr(i,length)<<endl;
            res++;
        }
        cout<<i<<endl;
    }
    return res;
}


int main()
{
 string s="abcdcbc";
 int m=1;
 int n=7;
 string sub="bc";
 //solve (m,n,s,sub);
 cout<<"Sol:"<<solve (m,n,s,sub)<<'\n';

}