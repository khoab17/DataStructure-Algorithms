#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t_case;
	cin>>t_case;
	for(int i=0; i<t_case; i++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int ,int> occurence;
	    for(int j=0; j<n; j++)
	    {
	        cin>>arr[j];
	        occurence[arr[j]]=occurence[arr[j]]+1;
	    }
	    int max=0;
	    for(int j=0; j<n;j++)
	    {
	        if(max < occurence[arr[j]])
	            max=occurence[arr[j]];
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
