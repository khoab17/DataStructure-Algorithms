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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=new ListNode();
        ListNode *temp=head;
        
        while(list1 || list2)
        {
            if(list1 && list2)
            {
                if(list1->val <= list2->val)
                {
                    temp->next=new ListNode(list1->val);
                    temp=temp->next;
                    list1=list1->next;
                }
                else 
                {
                    
                    temp->next=new ListNode(list2->val);
                    temp=temp->next;
                    list2=list2->next;
                }
            }
            else
            {
                if(list1)
                {
                    
                    temp->next=new ListNode(list1->val);
                    temp=temp->next;
                    list1=list1->next;
                }
                else 
                {
                    
                    temp->next=new ListNode(list2->val);
                    temp=temp->next;
                    list2=list2->next;
                }
            }
        }
        
        return head->next;
        
    }
};

int main()
{
    ListNode *l1=new ListNode(1);
    l1->next=new ListNode(2);
    l1->next->next=new ListNode(4);

    ListNode *l2=new ListNode(1);
    l2->next=new ListNode(3);
    l2->next->next=new ListNode(4);

    Solution s;
    ListNode *head=s.mergeTwoLists(l1,l2);

    while(head)
    {
        cout<<head->val<<endl;
        head=head->next;
    }
}