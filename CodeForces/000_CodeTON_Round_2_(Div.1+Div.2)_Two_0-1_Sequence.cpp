#include<bits/stdc++.h>
using namespace std;

//Solution 
void solve(string a, string b)
{
    while(a.length() != b.length() )
    {
        if(b[0]=='1')
        {
            a[1]=max(a[0],a[1]);
            a.erase(a.begin());
        }
        else{
            a[1]=min(a[0],a[1]);
            a.erase(a.begin());
        }
    }

    if(a==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

// void solve(string a,string b)
// {
//     int j=0;
//     int k=-1;

//     int b_size=b.length();
//     int a_size=a.length();

//     for(int i=0; i<a.length(); i++)
//     {
//         if(a[i]==b[j])
//         {
//             k=i;
//             break;
//         }
//     } 

//     if(k>=0)
//     {
//         for( int l=k+1; l<= a_size-(b_size-1); l++)
//         {
//             if(a.substr( l , b_size-1)== b.substr(1,b_size-1) )
//             {
//                 cout<<"YES"<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<"NO"<<endl;
// }

int main()
{
    int t_case;
    cin>>t_case;

    for(int i=0;  i<t_case; i++)
    {
        int n,m;
        string a,b;
        cin>>m>>n>>a>>b;
        solve(a,b);
    }
}