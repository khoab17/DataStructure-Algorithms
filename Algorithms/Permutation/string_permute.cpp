#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r)
{
    if(l==r)
       cout<<s<<"\n";
    for(int i=l; i<=r; i++){
        swap(s[l],s[i]);
        permute(s,l+1,r);
        swap(s[l],s[i]);
    }
}

//another approach
vector<string> ans;
vector<string> permute(string s){
    sort(s.begin(),s.end());
    do{
        ans.emplace_back(s);
    }while (next_permutation(s.begin(),s.end()));
    return ans;
}

int main(){

    permute("123",0,2);
    //vector<string> ans=permute("123");
    //for(auto i: ans) cout<<i<<"\n";
}