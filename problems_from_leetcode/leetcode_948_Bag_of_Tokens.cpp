#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        
        int j=tokens.size()-1;
        int ans=0;
        for(int i=0; i<= j; i++){
            if(tokens[i]<= power){
                power-=tokens[i];
                ans++;
            }
            else if(tokens[i]< power+tokens[j] && i!=j && ans) {
                power+=tokens[j];
                j--;
                i--;
                ans--;
            }
            else 
                break;
        }
    return ans;
    }
};

int main(){
    vector<int> tokens={100,200};
    Solution s;
    cout<<s.bagOfTokensScore(tokens, 150);

}