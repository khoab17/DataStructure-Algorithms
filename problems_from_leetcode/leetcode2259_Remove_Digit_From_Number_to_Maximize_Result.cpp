#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        string res;
        int n=number.size();
        for(int i=0; i<n; i++){
            if(number[i]==digit){
                res=max(res,number.substr(0,i)+number.substr(i+1));
            }
        }
        return res;
    }
};


int main(){
    string s="Hello world!";
    cout<<s.substr(4);
}