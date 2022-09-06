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

    int maxL=0;
    int ans=0;
    void solve(TreeNode * node , int l){
        if(!node) return;
        if(l>maxL){
            maxL=l;
            ans=node->val;
        }
        solve(node->left,l+1);
        solve(node->right,l+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return NULL;
        ans=root->val;
        solve(root,0);
        return ans;
    }
};

int main(){

}