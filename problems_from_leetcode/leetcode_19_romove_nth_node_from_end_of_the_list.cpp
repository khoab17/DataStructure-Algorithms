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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        ListNode *prev=head;
        while(n)
        {
            curr=curr->next;
            n--;
        }
        if(!curr)
            return head->next;
        
        while (curr->next)
        {
            curr=curr->next;
            prev=prev->next;
        }
        
        prev->next=prev->next->next;
        return head;
    }
};

void printList(ListNode *head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    ListNode *head=new ListNode(1);
    // head->next=new ListNode(2);
    // head->next->next=new ListNode(3);
    // head->next->next->next=new ListNode(4);
    // head->next->next->next->next=new ListNode(5);
    Solution s;
   // s.removeNthFromEnd(head,1);
    printList(s.removeNthFromEnd(head,1));
}