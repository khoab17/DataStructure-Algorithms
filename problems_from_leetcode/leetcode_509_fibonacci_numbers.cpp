#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        else 
            return fib(n-1)+fib(n-2);
    }
};


int main()
{
    Solution s;
    cout<<s.fib(4)<<endl;

}