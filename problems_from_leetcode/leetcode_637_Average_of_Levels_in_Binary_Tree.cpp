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

    unordered_map<int,long long> sum;
    unordered_map<int ,int> levelNode;
    int maxlevel=0;

    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        solve(root,0);
        for(int i=0; i<=maxlevel; i++){
            ans.push_back(double(sum[i])/double(levelNode[i]));
        }
        return ans;
    }

   
    void solve(TreeNode *node , int level){
        if(!node)
            return;
        else{
            sum[level]+=node->val;
            ++levelNode[level];
            maxlevel=max(level,maxlevel);
            solve(node->left,level+1);
            solve(node->right,level+1);
        }
    }
    
};

int main(){
    TreeNode * root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);
    Solution s;
    vector<double> ans=s.averageOfLevels(root);
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    // long long a=324e11;
    // cout<<a<<endl;
}