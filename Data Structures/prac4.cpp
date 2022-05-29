#include <iostream>
#include <vector>

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

int binaryToDec(int num)
{
    int sum=0;
    int remider,pow=1;
    while(num>0)
    {
        remider=num%10;
        sum+=(remider*pow);
        pow*=2;
        num=num/10;
    }
    return sum;
}

void ArrReverse(int *arr,int size)
{
    for(int i=0;i<size/2;i++)
    {
        arr[i]=arr[i]+arr[size-i-1];
        arr[size-i-1]=arr[i]-arr[size-i-1];
        arr[i]=arr[i]-arr[size-i-1];
    }
}

bool check(int j);
vector<int> comb()
{
    vector<int> numbers;
    for(int j=0;j<4000;j++)
    {
        if(check(j))
            numbers.push_back(j);
    }
    return numbers;
} 


bool check(int num)
{   
    if(num<1) return false;

    bool flag=true;
    while(num>=0)
    {
        if(num%10==3 || num%10==5)
            num=num/10;
        else
            {
                flag=false;
                break;
            }
    }
    return flag;
}


int main()
{
//  string s="abcdcbc";
//  int m=1;
//  int n=7;
//  string sub="bc";
//  //solve (m,n,s,sub);
//  cout<<"Sol:"<<solve (m,n,s,sub)<<'\n';

// int num;
// cin>>num;
// cout<<binaryToDec(num)<<endl;

// int arr[]={1,2,3,4,5,6,7};
// ArrReverse(arr,sizeof(arr)/sizeof(arr[0]));
// for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
// {
//     cout<<arr[i]<<" ";
// }

vector<int> numbers=comb();
for(int i:numbers)
{
    cout<<i<<endl;
}

   // cout<<check(3355)<<endl;
}