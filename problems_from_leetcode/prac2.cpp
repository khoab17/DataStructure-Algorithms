#include<bits/stdc++.h>
using namespace std;


int main()
{
    // unordered_map<int , int> d;
    // d[2]=4;
    // cout<<d[1];

    string s;
    getline(cin,s);

    istringstream words(s);

    string ss;
    while(words >> ss)
    {
        cout<<ss<<endl;
    }
}