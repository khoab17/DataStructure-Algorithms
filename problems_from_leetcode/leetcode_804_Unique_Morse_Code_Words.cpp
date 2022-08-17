#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codes={".-","-...","-.-.","-..",".","..-.","--.","....",
                  "..",".---","-.-",".-..","--","-.","---",".--.",
                  "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> seen;

        for(string word: words)
        {
            string s;
            for(char c: word)
                s+=codes[c-'a'];
            seen.insert(s);
        }
        return seen.size();
    }
};

int main()
{

}