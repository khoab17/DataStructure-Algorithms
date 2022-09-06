#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> res;
    void solve(int n,int k,int num, int digit){
        if(n==1)
            res.emplace_back(num);
        else{
            for(int i=0; i<=9; i++){
                if(abs(i-digit)==k)
                    solve(n-1,k,num*10+i,i);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        if(n==0) return {};
        for(int i=1; i<=9; i++)
            solve(n,k,i,i);
        return res;
    }
};

int main(){

    Solution s;
    vector<int> ans=s.numsSameConsecDiff(3,7);
    for(int i:ans)
        cout<<i<<" ";

}