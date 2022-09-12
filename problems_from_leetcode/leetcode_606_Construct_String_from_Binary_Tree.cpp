#include <bits/stdc++.h>
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
    string ans="";
    string tree2str(TreeNode* root) {
        if(!root) return "";
        if(!root->left && !root->right) return to_string(root->val)+"";
        if(!root->right) return "("+to_string(root->val)+tree2str(root->left)+")";
        return to_string(root->val)+"("+tree2str(root->left)+")"+"("+tree2str(root->right)+")";
    }
};

int main(){
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->right=new TreeNode(4);

    Solution s;
    string ans=s.tree2str(root);
    cout<<ans<<endl;
}