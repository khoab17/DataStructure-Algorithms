#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node():data(0),left(nullptr),right(nullptr){}
    Node(int key)
    {
        data=key;
        left=nullptr;
        right=nullptr;
    }
};

void InOrder(Node *root)
{
    if(root==NULL)
        return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PreOreder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    PreOreder(root->left);
    PreOreder(root->right);
}

void PostOrder(Node *root)
{
    if(root==NULL)
        return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{   
    Node *root=new Node(1);
    root->left= new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<"InOrder List: ";
    InOrder(root);

    cout<<"\nPreOrder List: ";
    PreOreder(root);

    cout<<"\nPostOrder List: ";
    PostOrder(root);
    cout<<endl;
}