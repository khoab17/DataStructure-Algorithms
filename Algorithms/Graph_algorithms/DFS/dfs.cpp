#include<bits/stdc++.h>
using namespace std;

class Graph{
    int numberofV;
    list<int> *adjlist;
    bool *visited;
    public:
    void initiolize(int vertices);
    void addEdge(int src,int des);
    void DFS(int vertex);

};

void Graph::initiolize(int vertices)
{
    numberofV=vertices;
    adjlist=new list<int>[vertices];
    visited=new bool[vertices];
}

void Graph::addEdge(int src,int des)
{
    adjlist[src].push_front(des); //end here if its a directed graph
    adjlist[des].push_front(src); // for undirected graph 
}

void Graph:: DFS(int  vertex)
{
    visited[vertex]=true;

    list<int> edges=adjlist[vertex];
    cout<<"Vertex:"<<vertex<<endl;

    list<int> :: iterator i;
    for(i=edges.begin(); i!=edges.end(); i++)
    {   
        if(!visited[*i])
         DFS(*i);
    }

}


int main()
{
    Graph g;
    g.initiolize(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(5,6);

    g.DFS(2);
        
    return 0;
}
