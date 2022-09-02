#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin>>tt;
    while (tt--)
    {
        string s,ss;
        cin>>s>>ss;

        if(s==ss && s[0]==s[1])
            cout<<"0\n";
        else{
            unordered_set<char> seen;
            int uc=0;
            for(int i=0; i<2; i++){
                if(!seen.count(s[i]))
                {  
                    uc++;
                    seen.emplace(s[i]);
                }
                if(!seen.count(ss[i]))
                {
                    uc++;
                    seen.emplace(ss[i]);
                }
            }   
            cout<<uc-1<<"\n";
        }
    }
    
}

