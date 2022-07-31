#include<iostream>
#include<set>
using namespace std;



int main()
{
    set<string> names;
    names.insert("syed");
    names.insert("khoab");
    names.insert("Abdullah");
    
    string key;
    cin>>key;
    if(names.find(key)!=names.end())
    {
        cout<<"Found";
    }
    else 
    {
        cout<<"Not Found";
    }
}