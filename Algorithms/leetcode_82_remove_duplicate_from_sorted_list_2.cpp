#include<iostream>
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        else
        {
            ListNode * temp=new ListNode();
            temp->next=head;
            ListNode *ptr=temp->next;

            while(ptr && ptr->next)
            {
                if(ptr->val == ptr->next->val)
                {
                    ptr=Check(ptr);
                }
                else 
                {
                }
            }
        }
    }

    bool unique(ListNode *node)
    {
        if(node->val == node->next->val)
            return false;
        else 
            return true;
    }

    ListNode *Check(ListNode* temp)
    {
        while (temp && temp->next)
        {
           if(temp->val == temp->next->val)
           {
               temp=temp->next;
           }
           else     break;
        }
        return temp->next;
    }
};

int main()
{
    ListNode *head=new ListNode(1);
    head->next=new ListNode(1);
     head->next->next=new ListNode(3);
    // head->next->next->next=new ListNode(3);
    // head->next->next->next->next=new ListNode(4);
    // head->next->next->next->next->next=new ListNode(4);
    // head->next->next->next->next->next->next=new ListNode(5);

    Solution s=Solution();
    head=s.deleteDuplicates(head);

    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
//     ListNode* temp=s.Check( head->next->next->next->next);
//    cout<<temp->val<<endl;
    
}