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
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
        if(y1<y2) return 0;
        else if(y1==y2)
        {
            if(m1<m2)return 0;
            else
            {
               if(m1==m2)
               {
                if(d1<=d2) return 0;
                else return (d1-d2)*15;
               }
               else return (m1-m2)*500;
            }
            
        }
        else return 1000;
}

vector<int> cutTheSticks(vector<int> arr) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    
    vector<int> ans;
    ans.emplace_back(n);

    while(arr.size()){
        int s=arr[0];
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=s) arr[i]-=s;
            if(arr[i]==0)
            {
                arr.erase(arr.begin()+i);
                i--;
            }
        }   
        ans.emplace_back(arr.size());
    }

    return ans;
}

int equalizeArray(vector<int> arr) {
    int s=arr.size();
    unordered_map<int, int>count;
    for(auto i: arr) ++count[i];
    int max=0;
    int n=count.size();
    for(int i=0; i<s; i++){
        if(count[arr[i]]>max)max=count[arr[i]];
    }
    return n-max;
}

int saveThePrisoner(int n, int m, int s) {
    return (m+s)%n-1;
}

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main()
{
    cout<<factorial(5);
    //cout<<saveThePrisoner(352926151,380324688 ,94730870);
    // vector<int> arr={3 ,3, 2, 1, 3};
    // cout<<equalizeArray(arr);
    // vector<int> nums={5, 4, 4, 2, 2, 8 };
    // vector<int> ans=cutTheSticks(nums);
    // for(auto i: ans) cout<<i<<" ";
    //cout<<libraryFine(2, 7, 1014,1 ,1, 1015);
    // vector<int> ranked={100 ,100 ,50 ,40, 40, 20, 10};
    // vector<int> player={5 ,25, 50, 120};
    // vector<int> ans=climbingLeaderboard(ranked,player);
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }
    // char c ='a';
    // for(int i=0;i<26; i++){
    //     cout<<c++<<" ";
    // }
    //cout<<10%0;
    // int n=2;
    // while (n--)
    // {
    //     cout<<"hello";
    // }
    

}
