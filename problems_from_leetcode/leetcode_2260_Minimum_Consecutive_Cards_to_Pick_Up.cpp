#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {

        int n=cards.size();        
        unordered_map<int,int> seen;

        int res=INT_MAX;
        bool flag=false;
        for(int i=0; i<n;i++)
                seen[cards[i]]=-1;

            for(int i=0;  i<n; i++){
                if(seen[cards[i]] >-1)
                {
                    flag=true;
                    res=min(res,i-seen[cards[i]]+1);
                    seen[cards[i]]=i;
                }
                else 
                    seen[cards[i]]=i;
            }
        if(!flag)
            return -1;
        else 
            return res;
        }
};

int main(){
    vector<int>  cards={3,4,2,3,4,7};
    Solution s;
    cout<<s.minimumCardPickup(cards);
}