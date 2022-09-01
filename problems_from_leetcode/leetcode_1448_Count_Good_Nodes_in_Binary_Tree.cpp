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
    void dfs(TreeNode *node, int max,int &res){
        if(!node) return;
        if(node->val>= max)
        {
            max=node->val;
            ++res;
        }
        dfs(node->left,max,res);
        dfs(node->right,max,res);
    }

    int goodNodes(TreeNode* root) {
        int res=0;
        dfs(root,INT_MIN,res);
        return res;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}