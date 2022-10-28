#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string ss;
        stack<string> st;
        while(str>> ss){
            st.push(ss);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(st.size()) ans+=" ";
        }
        return ans;
    }
};

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> ans(player.size());
    stack<int> st;
    int size=ranked.size();
    for(int i=0; i<size; i++){
        if(ranked[i]!= ranked[i-1])
            st.push(ranked[i]);
    }
    int n=player.size();
    int ind=0;
    while(n--){
        bool flag=false;
        while(!flag){
            if(st.top()>player[ind]){
                ans[ind]=st.size()+1;
                ind++;
                flag=true;
            }
            else if(st.top()== player[ind])
            {
                ans[ind]=st.size();
                ind++;
                flag=true;
            }
            else{
                st.pop();
                if(!st.size())
                {
                    while(n){
                        ans[ind]=1;
                        ind++;
                        n--;

                    }
                    flag=true;
                }
            }
        }
    }
    return ans;
}

struct pairs{
    int a, b,c;
    pairs(int x,int y,int z){
        a=x;
        b=y; 
        c=z;
    }
};

int main(){

    // vector<int> nums={ 295 ,294 ,291, 287, 287 ,285 ,285 ,284 ,283 ,279 ,277 ,274 ,274 ,271 ,270 ,268 ,268 ,268 ,264 ,260 ,259 ,258, 257, 255, 252, 250, 244, 241, 240, 237, 236 ,236 ,231 ,227, 227, 227, 226, 225 ,224, 223, 216, 212, 200, 197 ,196 ,194, 193 ,189 ,188 ,187, 183, 182, 178, 177, 173, 171, 169, 165, 143, 140, 137, 135 ,133 ,130, 130, 130 ,128 ,127 ,122 ,120 ,116 ,114 ,113 ,109 ,106 ,103 ,99 ,92 ,85 ,81 ,69 ,68 ,63 ,63 ,63 ,61 ,57 ,51 ,47 ,46 ,38 ,30 ,28 ,25 ,22 ,15 ,14 ,12, 6, 4 };
    // vector<int> ans=climbingLeaderboard({100, 100, 50, 40, 40, 20, 10},{5 ,25 ,50 ,120});
    // for(int i: ans) cout<< i<<" ";
    
    // int arr[26]={0};

    // string s="This is my common enemy";
    // for(int i=0; i<s.size(); i++){
    //     arr[s[i]-'a']++;
    // }

    // for(int i=0; i<26; i++){
    //     cout<<char('a'+i)<<"  :"<<arr[i]<<"\n";
    // }
    cout<<long long("hello world!dsadasdasd");

}