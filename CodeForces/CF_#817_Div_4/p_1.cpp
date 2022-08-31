#include<bits/stdc++.h>
using namespace std;


int main(){
    int t_case;
    cin>>t_case;
    string s="Timur";
    sort(s.begin(),s.end());
    while(t_case--){
        int n;
        string ss;
        cin>>n>>ss;
        sort(ss.begin(),ss.end());
        if(ss==s)
            cout<<"Yes\n";
        else 
            cout<<"No\n";
    }
}