#include<bits/stdc++.h>
using namespace std;


struct Queue{
    int key;
    int priority;
};

Queue qArr[1000];
int size=-1;

int  find_peek()
{   
    int highestP=INT_MIN;
    int index=-1;
    for(int i=0;i<=size;i++)
    {
        if(highestP<qArr[i].priority)
        {
            highestP=qArr[i].priority;
            index=i;
        }
        else if(highestP==qArr[i].priority && qArr[i].key > qArr[index].key && index>-1)
        {
            index=i;    
        }
    }
    return index;
}

void enqueue(int key,int priority)
{
    size++;
    qArr[size].key=key;
    qArr[size].priority=priority;
    return;
}

void dequeue()
{
    int index=find_peek();

    for(int i=index;i<size-1;i++)
    {
        qArr[i]=qArr[i+1];
    }
    size--;
}


int main()
{   
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 5);
    enqueue(44,10);
 
    // Stores the top element
    // at the moment
    int ind = find_peek();
 
    cout << qArr[ind].key << endl;
 
    // Dequeue the top element
    dequeue();
 
    // Check the top element
    ind = find_peek();
    cout << qArr[ind].key << endl;
 
    // Dequeue the top element
    dequeue();
 
    // Check the top element
    ind = find_peek();
    cout << qArr[ind].key << endl;
 
    return 0;

}