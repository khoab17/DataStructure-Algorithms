#include <iostream>
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
        if(!head)
            return head;
        else   
        {
            ListNode * ptr;
            ptr=head;
            while(ptr && ptr->next)
            {
                if(ptr->val == ptr->next->val)
                {
                    ptr->next=ptr->next->next;
                }
                else{
                    ptr=ptr->next;
                }
            }

            return head;
            
        }
}
};


int main()
{

}