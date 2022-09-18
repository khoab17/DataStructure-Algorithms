#include<bits/stdc++.h>
using namespace std;

int  Solve(string str,int length)
{
    int curr_max=0;
    int max=INT_MIN;

    char p='<';
    char m='>';

    for(int i=0; i<length; i++)
    {
        if(str[i]== p)
        {
            curr_max++;
            if(curr_max>max)
                max=curr_max;
        }
        else if(str[i]== m){
            curr_max--;
        }
    }
    return max;
}

void loop()
{
    for(int i=0; i<100000; i++)
    {
        for(int j=0; j<1000000;j++)
        {

        }
    }
}



// vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
//     vector<int> rank(player.size());
//     for(auto i: player) ranked.emplace_back(i);
//     sort(ranked.rbegin(),ranked.rend());
//     ranked.erase( unique( ranked.begin(), ranked.end() ), ranked.end() );
    
//     unordered_map<int, int> ranking;
    
//     int m=ranked.size();
//     int n=player.size();
//     int pos=0;
//     for(int i=0; i<m; i++){
//         ranking[ranked[i]]=pos+1;
//         pos++;
//     }
    
//     for(int i=0; i<n; i++){
//         rank[i]=ranking[player[i]];
//     }
//     return rank;
// }   


int binary_search(vector<int> &ranked,int *arr,int n, int score){
    int low=0,high=n-1;
    while(low<=high){
        int mid= (high+low)/2;
        if( score> ranked[mid-1] && score > ranked[mid+1] )
        {
            if(score==ranked[mid])
                return arr[mid];
            else 
                return arr[mid-1]+1;
        }
        if( score > ranked[mid]){
            high=mid-1;
        }
        else
            low=mid+1;
    }
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> rank(player.size());
    int arr[ranked.size()];
    arr[0]=1;
    int n=ranked.size();
    for(int i=1;  i<n; i++){
        if(ranked[i-1]==ranked[i]){
            arr[i]=arr[i-1];
        }
        else {
            arr[i]=arr[i-1]+1;
        }
    }
    
    int m=player.size();
    for(int i=0; i<m; i++){
        rank[i]=binary_search(ranked,arr,n,player[i]);
    }
    return rank;
}  

int main()
{

    vector<int> ranked={100 ,100 ,50 ,40, 40, 20, 10};
    vector<int> player={5 ,25, 50, 120};
    vector<int> ans=climbingLeaderboard(ranked,player);
    for(auto i: ans){
        cout<<i<<" ";
    }

}
