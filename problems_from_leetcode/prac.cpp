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


int main()
{
    // int n;
    // for(int i=0;i< 10;i++)
    // {
    //     n=rand()%10+20;
    //     cout<<n<<endl;
    // }

    time_t  start,end;
    time(&start);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    loop();
    time(&end);
    double  timetaken=double(end-start);
     cout << "Time taken by program is : " << fixed
         << timetaken << setprecision(5);
    cout << " sec " << endl;

    }
