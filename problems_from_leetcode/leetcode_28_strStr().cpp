#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()<1)
                return 0;
        else{
            int index=0;
           for(int i=0; i<haystack.size();i++)
           {
                if(needle[index]==haystack[i])
                {
                    int j=0;
                    bool match=true;
                    while(j<needle.length() && match)
                    {
                        if(needle[j]==haystack[i+j])
                        {
                            j++;
                        }
                        else
                            match=false;
                    }
                    if(match)
                        return i;
                }
           }
           return -1;
        }
    }
};

int main()
{
    string haystack="mississippi";
    string needle="issip";
    Solution s;
    cout<<s.strStr(haystack,needle);
}