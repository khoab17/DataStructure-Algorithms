#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> seen_words;
        unordered_set<string> banned_words(banned.begin(),banned.end());
        for(auto &c: paragraph)
        {
            if(isalpha(c))
            {
                c=tolower(c);
            }
            else 
                c=' ';
        }
        istringstream words(paragraph); 
        string s;
        int max=0;
        string ans;
        while(words >> s)
        {
            if( !banned_words.count(s))
            {
                seen_words[s]++;
                cout<<s<<":"<<seen_words[s]<<endl;
                if(seen_words[s]>max){
                    max=seen_words[s];
                    ans=s;
                }
            }
        }
        return ans;    
    }
};

int main()
{
    Solution s;
    vector<string> banned={"hit"};
    cout<<s.mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.",banned);
}