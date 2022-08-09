#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=20;
   for(int i=0; i<n; i++)
   {
    if(i>= n/2)
    {
        for(int ii=0; ii<n/2+1; ii++)
        {
            if(ii==n/2)
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<"\n";
    }
    else{
        
    for(int j=n/2-i; j>0; j--)
    {
        cout<<" ";
    }
    for(int k=0; k < i*2+1; k++ )
    {
        if(k==0 || k==i*2 || k==i || i==n/2-1)
            cout<<"*";
        else 
        cout<<" ";
    }
    cout<<"\n";
    }
   }

}