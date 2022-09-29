#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[26]={0};
    string s="hello world";

    for(int i=0; i< s.size(); i++){
        arr[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        cout<<char('a'+i)<<":"<<arr[i]<<endl;
    }
}

