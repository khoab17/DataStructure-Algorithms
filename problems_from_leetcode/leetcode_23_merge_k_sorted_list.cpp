#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:

    ListNode* printLists(vector<ListNode*> &lists)
    {
          for(ListNode *beg: lists)
        {
           while(beg)
           {
            cout<<beg->val<<" ";
            beg=beg->next;
           }
           cout<<endl;
        }
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
      //naive approach
      int size=lists.size();
      ListNode *head=lists[0];
      ListNode *l=lists[0];
      for(int i=1; i<size; i++)
      {
        ListNode *ln=lists[i];
        while(ln)
        {
            if(ln->val < l->val)
            {
                if(ln->val < head->val)
                {
                    ListNode *temp=ln;
                    ln=ln->next;
                    temp->next=head;
                    head=temp;
                }
                else{
                    
                }
            }
        }
      }
    }
};

int main()
{
    vector<ListNode*> lists;

    ListNode *rootOne=new ListNode(1);
    rootOne->next=new ListNode(4);
    rootOne->next->next=new ListNode(5);

    ListNode *rootTwo=new ListNode(1);
    rootTwo->next=new ListNode(3);
    rootTwo->next->next=new ListNode(4);

    ListNode *rootThree=new ListNode(2);
    rootThree->next=new ListNode(6);

    lists.push_back(rootOne);
    lists.push_back(rootTwo);
    lists.push_back(rootThree);

    Solution s;
    s.mergeKLists(lists);

}