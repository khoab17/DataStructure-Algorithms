#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
}*root;

void insertNode(int key)
{
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=key;
    new_node->left=NULL;
    new_node->right=NULL;

    if(!root)
    {
        root=new_node;
    }
    else
    {
       struct Node* temp=root;
       struct Node*parent=NULL;

       while(true)
       {
           parent=temp;
           if(parent->data>key)
           {
               temp=temp->left;
               if(!temp)
               {
                   parent->left=new_node;
                   return;
               }
           }
           else if(parent->data<key)
           {
               temp=temp->right;
               if(!temp)
               {
                   parent->right=new_node;
                   return;
               }
           }
       }
    }
}

bool BST(int key)
{
    if(!root)
    {
        return false;
    }
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp=root;

    while(true)
    {
        if(!temp)
        {
            return false;
        }
        else if(temp->data==key)
        {
            return true;
        }

        else if(temp->data>key)
        {
            temp=temp->left;
        }
        else 
        {
            temp=temp->right;
        }
    }
    return false;
}

int main()
{
    insertNode(7);
    insertNode(9);
    insertNode(6);
    insertNode(3);
    insertNode(1);

    int n;
    cin>>n;
    if(BST(n))
    {
        cout<<"Found"<<endl;
    } 
    else 
        cout<<"NOT Found"<<endl;

}