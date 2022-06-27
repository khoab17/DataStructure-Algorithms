#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    int carry=0;
    int sum;

    ListNode *head=new ListNode();
    ListNode *curr_node=head;

    while(l1!=NULL || l2!=NULL || carry)
    {
        sum=0;
        if(l1!=NULL)
        {
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum+=l2->val;
            l2=l2->next;
        }

        curr_node->next=new ListNode((sum+carry)%10);
        curr_node=curr_node->next;
        carry=(sum+carry)/10;
    }

    return head->next;
}


int main()
{
    ListNode*l1=new ListNode(9);
    ListNode *l1_head=l1;
    l1->next=new ListNode(9);
    l1->next->next=new ListNode(1);

    ListNode*l2=new ListNode(1);
    ListNode *l2_head=l2;
    l2->next=new ListNode(0);
    l2->next->next=new ListNode(1);


    ListNode* head= addTwoNumbers(l1_head,l2_head);
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }


}