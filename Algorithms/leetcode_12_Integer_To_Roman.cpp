#include<iostream>
using namespace std;

string intToRoman(int num) {  
    int sum=num;
    string ans="";
    while(sum>0)
    {
        if(sum>=1000)
        {
            ans+="M"; sum-=1000;
        }
        else if(sum>=900)
        {
            ans+="CM"; sum-=900;
        }
        else if(sum>=500)
        {
            ans+="D"; sum-=500;
        }
        else if(sum>=400)
        {
            ans+="CD"; sum-=400;
        }
            else if(sum>=100)
        {
            ans+="C"; sum-=100;
        }
            else if(sum>=90)
        {
            ans+="XC"; sum-=90;
        }
            else if(sum>=50)
        {
            ans+="L"; sum-=50;
        }
            else if(sum>=40)
        {
            ans+="XL"; sum-=40;
        }
            else if(sum>=10)
        {
            ans+="X"; sum-=10;
        }
            else if(sum>=9)
        {
            ans+="IX"; sum-=9;
        }
            else if(sum>=5)
        {
            ans+="V"; sum-=5;
        }
            else if(sum>=4)
        {
            ans+="IV"; sum-=4;
        }
        else 
        {
            ans+="I"; sum-=1;
        }
    }
    return ans;
}

int main()
{
    
}