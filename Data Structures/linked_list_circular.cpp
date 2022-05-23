#include <iostream>
using namespace std;

class Node{
    public:
    int key;
    Node *next;
};


void insert (Node **head,int key)
{
    Node *new_node =new Node ();
    Node *head_temp=*head;
    new_node->key=key;
    new_node->next=*head;

    if(*head!=NULL)
    {
        while(head_temp!=*head)
        {
             head_temp=head_temp->next;
        }
        head_temp=new_node;
    }
    else 
    {
        head_temp=new_node;
    }
    *head=new_node;
}

void printList(Node *head_ref)
{
    Node *head=head_ref;
    while(head!=NULL)
    {
        cout<<head->key<<" ";
        head=head->next;
    }
}

int main()
{

    Node *head = NULL;
 
    insert(&head, 12);
    insert(&head, 56);
    insert(&head, 2);
    insert(&head, 11);
 
    cout << "Contents of Circular Linked List\n ";
    printList(head);
    //cout<<head;
    // Node *temp=head;
    // while(temp!=NULL)
    // {
    //     cout<<temp->key;
    //     temp=temp->next;
    // }
 
    return 0;

}