#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        while(n>1)
        {
            cout<<n<<endl;
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n/=3;
            else if(n%5==0)
                n/=5;
            else 
                break;
            cout<<"N:"<<n<<endl;
        }

        if(n==1)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    cout<<s.isUgly(14)<<endl;
}