#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};

        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty())
        {
            int size=q.size();
            vector<int> temp;

            while(size--){
                Node * curr = q.front(); q.pop();
                temp.push_back(curr->val);
                for(auto i: curr->children)
                    q.push(i);
            }
            ans.push_back(temp);
        }
        
    }
};

// class Solution {
// public:

//     unordered_map<int , vector<int>> mp;

//     void solve(Node *root,int l){
//         if(!root) return;

//         queue<Node*> q;
//         for(auto i: root->children)
//         {
//             q.emplace(i);
//         }
//         while (!q.empty())
//         {
//             solve(q.front(),l+1);
//             q.pop();
//         }
//     }

//     vector<vector<int>> levelOrder(Node* root) {
//         solve(root,0);
//         vector<vector<int>> ans;
//         ans.push_back({root->val});
//         for(int i=0; i<mp.size(); i++){
//             ans.push_back(mp[0]);
//         }
//         return ans;
//     }
// };


// class Solution {
// public:

//     unordered_map<int, vector<int>> mp;
//     vector<vector<int>> ans;

//     void solve(Node *root,int l){
//         if(!root) return;

//         queue<Node*> q;
//         vector<int> t;
//         for(auto i: root->children){
//             t.push_back(i->val);
//             q.push(i);
//         }
//         while(!q.empty()){
//             mp[l]=t;
//             solve(q.front(),l+1);
//             q.pop();
//         }
//     }

//     vector<vector<int>> levelOrder(Node* root) {
//         solve(root,0);
//         ans.push_back({root->val});
//         for(int i=1; i<=mp.size(); i++)
//         {
//             ans.push_back(mp[i]);
//         }
//         return ans;
//     }
// };


int main(){

}