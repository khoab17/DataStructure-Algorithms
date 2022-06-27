#include<bits/stdc++.h>
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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int l=minDepth(root->left);
        int r=minDepth(root->right);
        if(l==0 || r==0)
            return max(l,r)+1;
        
        return min(l,r)+1;
    }
};

int  main()
{
    TreeNode *root=new TreeNode(3);
    root->right=new TreeNode(3);
    root->left=new TreeNode(3);
    root->right->right=new TreeNode(5);
    root->right->right->right=new TreeNode(6);
    root->right->right->right->right=new TreeNode(7);
    root->right->right->right->right->right=new TreeNode(8);

    Solution s;
    cout<<s.minDepth(root);



}