#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t_Case;
    cin>>t_Case;

    int n,m;
    while(t_Case--)
    {
        cin>>n>>m;
        if( (n+m)%2==0 )
            cout<<"Tonya\n";
        else 
            cout<<"Burenka\n";
    }
 }