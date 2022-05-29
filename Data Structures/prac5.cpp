#include <iostream>
#include <vector>
using namespace std;

vector<int> Solve()
{
    vector<int> numbers;
    for(int i=3333;i<5000;i++)
    {
        if(i%10==3 or i%10==5)
        {
            numbers.push_back(i);
        }
        else if(i%100==3 or i%100==5)
        {
            numbers.push_back(i);
        }
        else if(i%1000==3 or i%1000==5)
        {
            numbers.push_back(i);
        }
        else if(i%10000==3 or i%10000==5)
        {
            numbers.push_back(i);
        }
    }
    return numbers;
}

void Solve_2(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        arr[i]=arr[i]+arr[size-i-1];
        arr[size-i-1]=arr[i]-arr[size-i-1];
        arr[i]=arr[i]-arr[size-i-1];
    }
}


int main()
{
    // vector<int> numbers=Solve();
    // for(int i:numbers)
    // {
    //     cout<<i<<endl;
    // }
    // cout<<numbers.size()<<endl;

    int arr[]={1,2,3,4,5,6};
    Solve_2(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<endl;
    }
}