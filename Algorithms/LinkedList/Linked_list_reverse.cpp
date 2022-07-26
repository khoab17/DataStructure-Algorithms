#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node (int key):data(key),next(nullptr){}
};


Node* reverse(Node *head)
{   
    Node* curr,*prev,*next;

    curr=head;
    prev=nullptr;
    next=head->next;

    while(next)
    {
        curr->next=prev;
        prev=curr;
        curr=next;
        next=next->next;
    }
    curr->next=prev;
    return curr;
}

void printList(Node *head)
{
    while(head)
    {
        cout<<head->data<< " ";
        head=head->next;
    }
}


int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);

    printList(head);
    cout<<"\nAfter reversing"<<endl;    
    Node *newHead= reverse(head);
    printList(newHead);
    // while(head)
    // {
    //     cout<<head->data<<" ";
    //     head=head->next;
    // }
}