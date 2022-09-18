#include<bits/stdc++.h>
using namespace std;


string timeConversion(string s) {
    string format=s.substr(8,2);
    if(format=="AM")
    {
        if(s.substr(0,2)=="12")
        {
            return "00"+s.substr(2,6);
        }
        else
            return s.substr(0,8);
    }
       
    else {
        string ss=s.substr(0,2);
        int t=stoi(ss)+12;
        if(t==24)
            return "12"+s.substr(2,6);
        return to_string(t)+s.substr(2,6);
    }
}

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
        int ansA=0,ansB=0;
        for(auto i: apples)
        {
            if(a+i >= s && a+i <= t )
                ansA++;
        } 
        for(auto i: oranges){
            cout<<b-i<<";";
            
            if(b-i <= t && b-i >=s)
                ansB++;
        }
        cout<<ansA<<"\n"<<ansB<<"\n";
}


int birthday(vector<int> s, int d, int m) {
        int start=0, end=m-1;
        int ans=0;
        int sum=0;
        for(int i=0; i<= end; i++) sum+=s[i];
        int size=s.size();
        end++;
        while(end <= size){
            if(sum==d)
            {    
                ans++;
            }    
            sum-=s[start++];
            sum+=s[end++];
                
        }
        return ans;
}

int main()
{
    //cout<<birthday({2, 5, 1, 3, 4, 4, 3, 5, 1, 1, 2, 1, 4, 1, 3, 3, 4, 2, 1},18,7);
    // unordered_map<int , int> d;
    // d[2]=4;
    // cout<<d[1];

    // string s;
    // getline(cin,s);

    // istringstream words(s);

    // string ss;
    // while(words >> ss)
    // {
    //     cout<<ss<<endl;
    // }

   //countApplesAndOranges(2,3,1,5,{2},{-2});

    // unordered_set<int> seen;
    // seen.emplace(1);
    // seen.erase(1);
    // cout<<seen.count(1)<<endl;
    // int a=-102;
    
    // int rev=0;
    // while(a)
    // {
    //     int rem=a%10;
    //     //cout<<rem<<endl;
    //     rev=rev*10+rem;
    //     a/=10;
    // }
    // cout<<abs(rev)*-1<<endl;

    int n=10;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++ ) cout<<" ";
        for(int k=(i*2)-1; k>0; k--)
        {
            if(k==i*2-1 || k==1 || k==i || i==n)
                cout<<"#";
            else cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++) cout<<" ";
        cout<<"#\n";
    }
}