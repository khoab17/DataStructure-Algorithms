#include<iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



int height(TreeNode* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int l = height(node->left);
        int r = height(node->right);
        return max(l,r)+1;
    }
}

bool isBalanced(TreeNode* root) {   
    if(!root)
        return true;
    if(abs(height(root->left)-height(root->right))>1)
    {
        return false;
    }
    else 
        return isBalanced(root->left) && isBalanced(root->right);
}



int main()
{
    TreeNode *root=new TreeNode(3);
    root->left=new TreeNode(2);
    root->right=new TreeNode(20);

    root->left->left=new TreeNode(15);
    root->left->right=new TreeNode(7);

    root->left->left->left=new TreeNode(7);
    root->left->left->right=new TreeNode(7);

    root->left->left->left->left=new TreeNode(7);
    
    cout<<isBalanced(root)<<endl;


}