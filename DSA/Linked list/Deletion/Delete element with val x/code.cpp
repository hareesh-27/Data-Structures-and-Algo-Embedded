class Solution {
    public:
        ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
        if (head == NULL) return head;
            
        // If first node has target value, delete 
        if (head->data == X) 
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
            
            ListNode* temp=head; ListNode* prev=nullptr; 
            while(temp!=nullptr)
            {
                if(temp->data == X)
                {
                    prev->next = prev->next->next;
                    delete temp;
                    break;
                }

                prev=temp;
                temp=temp->next;
            }
            return head;
        }
};
