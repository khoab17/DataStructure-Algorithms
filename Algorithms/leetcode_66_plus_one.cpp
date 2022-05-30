#include  <bits/stdc++.h>
using namespace std;


vector<int> plusOne(vector<int>& digits) {
    int max=digits.size()-1;
    if(digits[max]==9)
    {
        digits[max]=0;
        bool flag=true;
        max--;
        while(max>=0)
        {
            if(digits[max]==9 && flag)
            {
                digits[max]=0;
                flag=true;
            }
            else if(flag){
                digits[max]=digits[max]+1;
                flag=false;
            }
            max--;
        }
        if(flag)
        {
            digits.insert(digits.begin(),1);
        }
    }
    else
    {
        digits[max]=digits[max]+1;
    }
    return digits;
}


//another sol
vector<int> plusOne(vector<int>& digits) {
    int quotient;
    int last=digits.size()-1;

    quotient=(digits[last]+1)/10;
    digits[last]=(digits[last]+1)%10;
    last--;

    while(quotient>0 && last>=0)
    {
        int val;
        val=(digits[last]+quotient);
        digits[last]=val%10;
        quotient=val/10;
        last--;
    }
    if(quotient)
    {
        digits.insert(digits.begin(),quotient);
    }
    return digits;
}


int main()
{
    vector<int> nums;
    nums.push_back(9 );
    nums.push_back( 8);
    nums.push_back( 0);
    //nums.push_back( 9);

    nums=plusOne_2(nums);

    for(int i:nums)
    {
        cout<<i<<" ";
    }

}