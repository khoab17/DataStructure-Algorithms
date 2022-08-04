#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int flag=false;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]!=' ')
            {
                flag=true;
                length++;
            }
            if(s[i]==' ' && flag)
                break;
        }
        return length;
    }
};


int main()
{

}