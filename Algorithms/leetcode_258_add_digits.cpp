#include<bits/stdc++.h>
using namespace std;

int sort_num(int num)
{
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    int res=0;
    while(sum>0)
    {
        res+=sum%10;
        sum/=10;
    }
    return res;
}

int addDigits(int num) {

    int res=sort_num(num);

    while(res>9)
    {
        res=sort_num(res);
    }
    return res;
}

int main()
{
    cout<<addDigits(199);
}