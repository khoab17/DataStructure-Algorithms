#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

void MapEmployee(vector<int> ids,vector<string> names)
{
        map<int,string> employees;
        for(int i=0;i<ids.size();i++)
            employees.insert(pair<int,string>(ids[i],names[i]));
        cout<<employees[4]<<endl;
}

void Roman_To_Integer(int  s[],int size)
{
    map<char, int> map = {{1, 'I'}, {10, 'X'}};
    for(int i=0;i<size;i++)
    {
        cout<<char(map[s[i]])<<endl;
    }
}
string intToRoman(int num) {
        
        int sum=num;
        string ans="";

        while(sum>0)
        {
            if(sum>=1000)
            {
                ans+="M"; sum-=1000;
            }
            else if(sum>=900)
            {
                ans+="CM"; sum-=900;
            }
            else if(sum>=500)
            {
                ans+="D"; sum-=500;
            }
            else if(sum>=400)
            {
                ans+="CD"; sum-=400;
            }
             else if(sum>=100)
            {
                ans+="C"; sum-=100;
            }
             else if(sum>=90)
            {
                ans+="XC"; sum-=90;
            }
             else if(sum>=50)
            {
                ans+="L"; sum-=50;
            }
             else if(sum>=40)
            {
                ans+="XL"; sum-=40;
            }
             else if(sum>=10)
            {
                ans+="X"; sum-=10;
            }
             else if(sum>=9)
            {
                ans+="IX"; sum-=9;
            }
             else if(sum>=5)
            {
                ans+="V"; sum-=5;
            }
             else if(sum>=4)
            {
                ans+="IV"; sum-=4;
            }
            else 
            {
                ans+="I"; sum-=1;
            }
        }
        return ans;
}

void frequency_of_characters(string s)
{

    int frequency[256]={0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        frequency[s[i]]+=1;
    }

    for(int i=0;i<256;i++)
    {
        if(frequency[i]>0)
        {
            cout<<char(i)<<" Times:"<<frequency[i]<<endl;
        }
    }
}


int main()
{
    // vector<int> ids;
    // for(int i=0;i<10;i++)   
    //     ids.push_back(i);

    // vector<string> names;
    // for(int i=0;i<10;i++)
    //     names.push_back("Karim"+i);
    
    // MapEmployee(ids,names);
    
    //string s="1";
    // int n[]={1,1,1,10};
    // Roman_To_Integer( n,sizeof(n)/sizeof(n[0]));

    cout<<intToRoman(1500);

}