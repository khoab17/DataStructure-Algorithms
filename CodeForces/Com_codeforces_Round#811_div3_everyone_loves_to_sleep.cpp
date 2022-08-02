#include<bits/stdc++.h>
#include<math.h>
using namespace std;

vector<int> solve(int hour,int minute, vector<vector<int>>& alarms )
{ 

    int s_time =INT_MAX;
    for(auto time: alarms)
    {
        int temp=hour*60+minute;
        int temp2=time[0]*60+time[1];
        if(temp > temp2)
        {
            temp2+=(24*60);
        }
        int diff=abs(temp- temp2 );
        s_time= min(s_time , diff);
    }
    cout<<s_time/60<<" ";
    s_time%=60;
    cout<<s_time<<"\n";

}

int_fast32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int t_Case;
    cin>>t_Case;

    for(int i=0; i<t_Case; i++){
        int n,h,m;
        cin>>n>>h>>m;

        vector<vector<int>> alarms;
        int hh,mm;
        for(int i=0; i<n; i++)
        {
            cin>>hh>>mm;
            alarms.push_back({hh,mm});
        }
         solve(h,m,alarms);
    }

    
    return 0;
}