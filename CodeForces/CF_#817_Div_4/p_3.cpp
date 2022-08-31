#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t_case;
    cin>>t_case;
    while (t_case--)
    {
        int n; 
        cin>>n;
        unordered_map<string ,int> count;
        vector<vector<string>> s(3, vector<string>(n));

        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++)
            {
                cin>>s[i][j];
                ++count[s[i][j]];
            }
        }

        for(int i=0; i<3; i++)
        {
            int res=0;
            for(int j=0; j<n; j++){
                if(count[s[i][j]]==1){
                    res+=3;
                }
                else if(count[s[i][j]]==2){
                    res+=1;
                }
            }
            cout<<res<<" ";
        }
        cout<<"\n";
    }
    
}
