#include<bits/stdc++.h>
using namespace std;


struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    //calculating cycle starting point
    int cycle_starting_index(ListNode* slow,ListNode*fast)
    {
        while(fast!=slow)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return fast->val;
    }

    // solved with Floyd's cycle detection algorithm (rabbit tortoise) algoritm
    bool hasCycle(ListNode *head) {
        
        ListNode *fast=head;
        ListNode *slow=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast=slow)
            {
                cout<<cycle_starting_index(head,fast)<<endl;
                return true;           
            }
        }
        return false;
    }
};

int main()
{
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    head->next->next->next->next->next=head->next->next;
    Solution s;
    cout<<s.hasCycle(head);
}