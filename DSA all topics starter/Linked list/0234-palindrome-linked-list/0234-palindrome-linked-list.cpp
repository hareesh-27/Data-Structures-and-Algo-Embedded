class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        //finding middle
        while(fast != nullptr && fast->next !=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        //reversing 2nd half. 
        ListNode* temp=slow;
        ListNode*prev=nullptr;

        while(temp!=nullptr)
        {
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }

        //comparing both sides
        ListNode* left=head;
        ListNode* right=prev;

        while(right!=nullptr)
        {
            if(left->val != right->val) return false;
            left=left->next;
            right=right->next;        
        }

        return true;
    }
};