#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int size, front, rear;
    unsigned capacity;
    int *array;

    Queue* createQueue(unsigned capacity);
    bool enqueue(int key,Queue *queue);
    bool dequeue(Queue *queue);
    int getFront(Queue *queue);
    int getRear(Queue *queue);

};

Queue* Queue::createQueue(unsigned capacity)
{
    Queue *queue=new Queue();
    queue->size = queue->front = 0;
    queue->capacity=capacity;
    queue->array= new int [queue->capacity];
    queue->rear=capacity-1;
    return queue;
}

bool Queue::enqueue(int key,Queue * queue)
{
    if(queue->size==queue->capacity)
        return false;

    queue->rear=(queue->rear+1)%queue->capacity;
    queue->array[rear]=key;
    queue->size+=1;
    return true;
}

bool Queue::dequeue(Queue * queue)
{
    if(queue->size==0)
        return false;

    queue->front++;
    return true;
}

int Queue :: getFront(Queue *queue)
{
    if(queue->size==0)
    {
        return INT_MIN;
    }
    else 
    return queue->array[queue->front];
}

int Queue::getRear(Queue *queue)
{
    if(queue->size==0)
        return INT_MIN;

    else return queue->array[queue->rear];    
}

int main()
{
    Queue* queue = new Queue();
    queue=queue->createQueue(100);
 
    queue->enqueue(10,queue);
    queue->enqueue(20,queue);
    queue->enqueue(30,queue);
    queue->enqueue(40,queue);
    queue->dequeue(queue);

    //cout<<queue->size;
    // cout << queue->dequeue(queue)
    //      << " dequeued from queue\n";
 
    cout << "Front item is "
         << queue->getFront(queue) << endl;
    cout << "Rear item is "
         << queue->getRear(queue) << endl;
 
    return 0;

}