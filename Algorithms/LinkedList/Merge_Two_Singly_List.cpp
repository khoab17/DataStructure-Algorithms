#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int key)
    {
        val=key;
        next=nullptr;
    }
};

class Solution{
    public:

    ListNode* mergeList(vector<ListNode*> &lists)
    {
        ListNode *l=lists[0];
        ListNode *ll=lists[1];

        ListNode *head1=l;
        ListNode *head2=ll;
        ListNode *res=nullptr;
        ListNode *temp=nullptr;

        if(!head2)
            return head1;
        else if(!head1)
            return head2;

        while (head1 || head2)
        {
            // if(!head1)
            // {
            //     res->next=head2;
            //     res=res->next;
            //     head2=head2->next;
            // }            
            // else if(!head2)
            // {
            //     res->next=head1;
            //     res=res->next;
            //     head1=head1->next;
            // }

            cout<<head1->val<<" : "<<head2->val<<endl;

            if(head1->val < head2->val)
            {
                res->next=head1;
                res=res->next;
                head1=head1->next;
            }
            else 
            {
                res->next=head2;
                res=res->next;
                head2=head2->next;
            }

            if(!temp)
            {
                temp=res;
            }

            cout<<res->val<<" ";
        }
        return temp;
        
    }
};

int main()
{
    ListNode *root=new ListNode(1);
    root->next=new ListNode(2);
    root->next->next=new ListNode(3);

    ListNode *root2=new ListNode(0);
    root2->next=new ListNode(2);
    root2->next->next=new ListNode(3);

    vector<ListNode*> lists;

    lists.push_back(root);
    lists.push_back(root2);

    Solution s;
    ListNode *head=s.mergeList(lists);

    // while(head)
    // {
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    
    
}