#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node (int key){
    val=key;
    left=nullptr;
    right=nullptr;
    }
};

void DFS(Node *root){
    if(!root) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        cout<<q.front()->val<<" ";
        q.pop();
    }
}

// printting list in inorder
void print_Tree(Node *root){
    if(!root) return;
    print_Tree(root->left);
    cout<<root->val<<" ";
    print_Tree(root->right);
}

//preOrder
void preOrder(Node *root){
    if(!root) return ;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    preOrder(root);
}