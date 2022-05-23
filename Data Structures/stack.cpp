#include <iostream>
using namespace std;

#define MAX 100

class Stack{
    int top;

    public:
    Stack()
    {
        top=-1;
    }
    int arr[MAX];
    


    bool push(int key)
    {
        if( top  >= (MAX-1) ) 
        {
            cout<<"stack is full";
            return false;
        }
        else 
        {
            arr[++top]=key;
            return true;
        }
    }

    bool pop()
    {
        if(top >-1)
        {
            top--;
            return true;
        }
        else 
        {
            cout<<"Stack is already empty";
            return false;
        }
    }

    int topVal()
    {
        if(top>-1)
        {
        return arr[top];
        }
        else return 0;
    }

    bool isEmpty()
    {
        return top<0;
    }

    void printStack()
    {
        if(arr[top!=NULL])
        {
            int temp=top;
            while(temp > -1)
            cout<<arr[temp--]<<"  ";
        }
        
    }
};



int main()
{
     class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    s.printStack();
    //cout<<s.topVal();
    return 0;
}