#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int s1=a.length()-1;
        int s2=b.length()-1;

        string ans;
        int carry=0;
        while(s1>=0 || s2>=0)
        {
            int temp=0;
            if(s1>=0 && s2>=0)
                 temp=carry+((int)a[s1]-48)+((int)b[s2]-48);
            else if(s1>=0)
                temp=carry+((int)a[s1]-48);
            else
                temp=carry+((int)b[s2]-48);

           if(temp==0 || temp==2)
           {
                ans.append("0");
                if(temp==2)
                    carry=1;
                else
                    carry=0;
           }
           else if(temp==1 || 3)
            {
                ans.append("1");
                if(temp==3)
                    carry=1;
                else 
                    carry=0;
            }
            s1--;s2--;
        }
        if(carry)
           ans.append("1");
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

int main()
{
    Solution s;
    string ss=s.addBinary("1010","1011");
    cout<<ss<<endl;

}