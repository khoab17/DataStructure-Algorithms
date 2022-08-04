#include<bits/stdc++.h>
using namespace std;


int solve(int n)
{
    if(n==1)
        return 2;
    else{
        return (n+2)/3;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(0);

    int t_Case;
    cin>>t_Case;
    while(t_Case--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<"\n";
    }

 }