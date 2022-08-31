#include<bits/stdc++.h>
using namespace std;

int main(){
    int t_case;
    cin>>t_case;

    while(t_case--){
        int n;
        string s, ss;
        cin>>n>>s>>ss;

        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if( ! ((s[i]=='R' && ss[i]=='R') ||  ( s[i]!='R' && ss[i]!='R')) )
            {
                flag=false;
                break;
            }
          
        }
        if(flag)
            cout<<"Yes\n";
        else 
            cout<<"No\n";
    }
}