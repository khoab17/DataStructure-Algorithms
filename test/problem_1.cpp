#include<bits/stdc++.h>
using namespace std;

void sovle(string a,string b)
{
    int j=0;
    int k=-1;

    int b_size=b.length();
    int a_size=a.length();

    bool match=false;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==b[j])
        {
            k=i;
            break;
        }
    } 

    if(k>=0)
    {
        for( int l=k+1; l<= a_size-(b_size-1); l++)
        {
            if(a.substr( l , b_size-1)== b.substr(1,b_size-1) )
            {
                match=true;
                cout<<"YES"<<endl;
                break;
            }
        }
    }
    if(!match)
        cout<<"NO"<<endl;
}

int main()
{
    int t_case;
    cin>>t_case;

    for(int i=0;  i<t_case; i++)
    {
        int n,m;
        cin>>n;
        cin>>m;
        string a,b;
        cin>>a;
        cin>>b;
        sovle(a,b);
    }
}