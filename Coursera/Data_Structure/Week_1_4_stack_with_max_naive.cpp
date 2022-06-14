#include<bits/stdc++.h>
using namespace std;

class stack_class{
    vector<int> arr;

    public:
    void push(int data )
    {
        arr.push_back(data);
    }
    void pop()
    {   
        arr.pop_back();
    }
    int max()
    {
       return *max_element(arr.begin(),arr.end());
    }
};

int main()
{   
    int numQuery=0;
    string query;
    cin>>numQuery;
    stack_class s;
    for(int i=0;i<numQuery;i++)
    {
        cin>>query;
        if(query=="push")
        {
            int n;
            cin>>n;
            s.push(n);
        }
        else if(query=="pop")
        {
            s.pop();
        }
        else if(query=="max")
        {
            cout<<s.max()<<endl;
        }
    }

}