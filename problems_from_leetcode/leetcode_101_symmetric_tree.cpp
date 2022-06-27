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

class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {  
        if(!root)
            return true;
        else 
            return check(root->left,root->right);
    }

    bool check(TreeNode* p, TreeNode* q) 
    {
        if(!p && !q)
            return true;
        else if((!p && q) || (p && !q))
            return false;
        else if(p->val == q->val)
            return check(p->left,q->right) && check(p->right,q->left);
        else 
            return false;
    }
};

int main()
{

}