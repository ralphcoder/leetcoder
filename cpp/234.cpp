/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode *prev=NULL;
        while(head){
            ListNode *next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *fast=head,*slow=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast!=NULL)slow=slow->next;
        slow=reverse(slow);
        fast=head;
        while(slow){
            if(fast->val!=slow->val)return false;
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
    
};