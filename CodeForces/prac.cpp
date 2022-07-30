#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int j=10;
    for(int i=20; i>=0; i--)
    {
        if(i>=10)
        {
            cout<<i-j<<" ";
        }
        else{
            cout<<j-i<<" ";
        }
    }
}

int main()
{
    solve();
}