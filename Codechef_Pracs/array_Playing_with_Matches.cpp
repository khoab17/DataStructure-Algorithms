#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_map<int,int> match_need({{0,6},{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6}});
	
	int t_case;
	cin>>t_case;
	for(int i=0; i<t_case; i++)
	{
	    int a, b;
	    cin>> a>>b;
	    int sum=a+b;
	    int res=0;
	    while(sum>0)
	    {
	        int rem=sum%10;
	        res+=match_need[rem];
	        sum/=10;
	    }
	    cout<<res<<"\n";
	}
	
	return 0;
}
