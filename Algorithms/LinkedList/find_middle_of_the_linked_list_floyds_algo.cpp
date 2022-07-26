#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int key)
    {
        val=key;
        next=nullptr;
    }
};

//using floyds cycle detection algorithm
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

Node* findMiddle(Node *head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    Node *root=new Node(1);
    root->next=new Node(2);
    root->next->next=new Node(3);
    root->next->next->next=new Node(4);
    root->next->next->next->next=new Node(5);
    root->next->next->next->next->next=new Node(6);

    Node* ans=findMiddle(root);
    cout<<ans->val<<endl;


}