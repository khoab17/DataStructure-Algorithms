#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t_Case;
    cin>>t_Case;
    while (t_Case--)
    {
        long long n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        x--;y--;
        long long x1=x-d;
        long long x2=x+d;
        long long y1=y-d;
        long long y2=y+d;
        if( (x1 <=0 && y1 <=0) || (x2 >= n-1 && y2 >=m-1) || (x1<=0 && x2>= n-1) || (y1<=0 && y2>=m-1) )
            cout<<-1<<"\n";
        else {
            cout<<n+m-2<<"\n";
        }
    }
    
}

