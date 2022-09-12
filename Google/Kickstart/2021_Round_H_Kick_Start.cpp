#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s, f;
    cin >> s >> f;
    int ans = 0;

    for(auto e: s){
    	int a = (e - 'a');
    	int k = 26;
    	for(auto z: f){
    		int b = (z - 'a');
    		k = min(k,min((b - a + 26) % 26, (a - b + 26) % 26));
    	}
    	ans += k;
    }
    cout<<ans;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

//    int tt;
//    cin>>tt;

//    for(int i=1; i<= tt; i++){
//     cout<<"Case #"<<i<<": ";
//     solve();
//     cout<<"\n";
//    }

    string a="zabcy";
    char c='b';

    for(char ch : a){
        cout<<(ch-'a')-26 <<" : "<<(ch-'a')+26<<endl;
    }
}