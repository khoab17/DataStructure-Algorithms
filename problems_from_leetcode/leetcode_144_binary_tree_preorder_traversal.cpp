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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)
            return {};
        else{
            vector<int> res={};
            stack<TreeNode*> preorder;
            preorder.push(root);

            while( !preorder.empty() )
            {
                root=preorder.top();
                res.push_back(root->val);
                preorder.pop();

                if(root->right)
                    preorder.push(root->right);
                if(root->left)
                    preorder.push(root->left);
                cout<<"size"<<preorder.size()<<endl;
            }
            return res;
        }
    }
};

int main()
{
    Solution s;

    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);

    vector<int> ans=s.preorderTraversal(root);

    for(int i: ans)
    {
        cout<<i<<" "<<endl;
    }
}