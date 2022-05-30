#include<iostream>
using namespace std;

class Node{
    int data;
    Node* left;
    Node *right;

    public:
    Node(int key)
    {
        data=key;
        left=right=NULL;
    }

    Node* InsertNodeLeft(Node* node, int key);
    Node* InsertNodeRight(Node* node, int key);
    int getKey(Node *node)
    {
        return node->data;
    }
    int keyByIndexleft(Node *node,int index)
    {
        for(int i=0;i<index;i++)
        {
            node=node->left;
        }
        return node->data;
    }
};

Node* Node::InsertNodeLeft(Node *node,int key)
{
    Node* temp=node->left=new Node(key);
    return temp;
}
Node* Node::InsertNodeRight(Node *node,int key)
{
    Node* temp=node->right=new Node(key);
    return temp;
}

int main()
{
    Node *root=new Node(1);
    root->InsertNodeLeft(root,2);
    root->InsertNodeRight(root,3);

    cout<<root->getKey(root)<<endl;
    cout<<root->keyByIndexleft(root,1)<<endl;
}