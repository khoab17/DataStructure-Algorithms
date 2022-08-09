#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int size=s.size();
        int arr[256]={0};
        for(int i=0; i<size; i++)
        {
            arr[s[i]] = arr[s[i]] +1;
        }
        int count =0;
        int flag=0;
        for(int i=0; i<256; i++)
        {
            if(arr[i]%2 == 0)
                count+=arr[i];
            else {    
            count+=arr[i]-1;
            flag=1;}
        }
        return flag+count;
    }
};

int main()
{
    Solution s;
    cout<<s.longestPalindrome("abccccdd")<<endl;
    
}