#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int size=properties.size();
        sort(properties.begin(),properties.end());   
        int ans=0;
        int grp=properties[0][0];
        int min_def=properties[0][1];

        for(int i=1; i<size-1; i++){
            if( properties[i][0] != grp)
            {
                if(properties[i][1] > min_def )
                {
                    ans++;
                    
                }
            }
                
        }     
        return ans;
    }
};
int main(){
        vector<vector<int>> properties;
        //properties={{5,5},{6,3},{3,6}};
        properties={{2,2},{3,3},{4,4}};
        Solution s;
        cout<<s.numberOfWeakCharacters(properties)<<endl;
        
}