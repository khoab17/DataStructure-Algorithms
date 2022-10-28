#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int n){
        
}

long long fibonacci(int n){
    if(n<2) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

long long fact(int n){
    if(n<2) return 1;
    return n*fact(n-1);
}

int gcd(int a,int b){
    if(b==0) return a;
    else
        gcd(b,a%b);
}

string timeInWords(int h, int m) {
    unordered_map<int, string> t_t={{1,"one"}, {2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7, "seven"}, {8,"eight"},{9,"nine"},{10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},{15, "quarter"},{16,"sixteen"},{17,"seventeen"},{18,"eighteen"},{19,"nineteen"},{20,"twenty"},{21,  "twenty one"},{22,"twenty two"},{23,"twenty three"},{24,"twenty four"},{25,"twenty   five"},{26,"twenty six"},{27,"twenty seven"},{28,"twenty eight"},{29,"twenty nine"},{30,"half"}};
    
    if(m==0) return t_t[h]+" o' clock";
    else if(m==1) return t_t[m]+" minute past "+t_t[h];  
    else if(m<15) return t_t[m]+" minutes past "+t_t[h];  
    //else if(m==15) return "quarter past "+t_t[h];  
    else if(m==15 || m==30) return t_t[m]+" past "+t_t[h]; 
    else if(m<30) return t_t[m]+" minutes past "+t_t[h];  
    else if(m==45) return "quarter to "+t_t[(h+1)%12];       
    else return t_t[60-m]+" minutes to "+t_t[(h+1)%12];  
}

int main()
{
    cout<<timeInWords(6,35);
    // cout<<fibonacci(0)<<"\n";
    // cout<<fact(10);
    // int t_case;
    // cin>>t_case;

    // while (t_case--)
    // {
    //     int n;
    //     cin>>n;
    //     vector<int> arr(n);
    //     for(int i=0; i<n; i++)
    //         cin>>arr[i];
        
    //     solve(arr,n);
    // }
    
}