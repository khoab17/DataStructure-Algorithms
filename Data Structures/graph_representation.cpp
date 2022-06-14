#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> list[],int v,int u)
{
    list[v].push_back(u);
    list[u].push_back(v);
}

void printGraph(vector<int> list[],int size)
{
    for(int i=0; i < size; i++)
    {
        cout<<"Adjacency list of vertex: "<<i<<" ";
        for(auto i: list[i])
            cout<<"-->"<<i;
        cout<<endl;
    }
}

int main()
{
    //matrix representation
    // int matrix[4][4]={{1,0,0,0},{1,1,0,0},{0,0,1,1},{0,1,1,0}};
    // cout<<"Matrix representation:"<<endl;
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0; j< 4;j++)
    //         cout<<matrix[i][j]<<" ";
    //     cout<<endl;
    // }

    //representation with adjacency list undirected
    vector<int> list[4];
    addEdge(list,0,1);
    addEdge(list,0,3);
    addEdge(list,1,2);
    addEdge(list,2,3);
    addEdge(list,1,3);

    printGraph(list,4);

    return 0;

}