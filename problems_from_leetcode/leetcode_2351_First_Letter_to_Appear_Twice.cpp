#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for(char i: s)
        {
            if(seen.count(i))
                return i;
            else
                seen.insert(i);
        }      
    }
};

int main(){

}