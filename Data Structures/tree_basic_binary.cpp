#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node (int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int sum_of_nodes(Node *root)
{
    if(root == NULL)
        return 0;
    else 
    {
        return root->data+(sum_of_nodes(root->left)+sum_of_nodes(root->right));
    }
}

bool search(int key,Node *root)
{
    if(root==NULL) {
        return false;
    }
    else if(root->data==key )
    {
        return true;
    }
    else if(root->data<key)
    {
        return search(key,root->right);
    }
    else
        return search(key,root->left);
}

int main()
{
    Node *root=new Node(4);
    root->left=new Node(3);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(2);


    cout<<"Node Data:"<<root->left->left->data<<endl;
    cout<<"Sum is:"<<sum_of_nodes(root)<<endl;
    
    int in;
    cout<<"Search item:"<<endl;
    cin>>in;
    
    if(search(in,root)!=false)
    {
        cout<<"Found"<<endl;
    } 
    else cout<<"Not Found"<<endl;

    return 0;
}