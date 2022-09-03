#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,r,c;
        cin>>n>>k>>r>>c;
        r--; c--;
        vector<vector<char>> matrix(n, vector<char>(n,'.'));

        for(int i=r; i<n; i++){
            for(int j=c; j<n; j++){
                matrix[i][j]='X';
            }
        }
    }
}