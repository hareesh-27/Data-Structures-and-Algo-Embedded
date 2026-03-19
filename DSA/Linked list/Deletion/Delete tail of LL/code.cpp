

class Solution {
    public:
        ListNode* deleteTail(ListNode* &head) {
            ListNode* temp=head;

            if(head==nullptr) return nullptr;
            if(head->next == nullptr) return nullptr;

            while(temp->next->next != nullptr)
            {
                temp=temp->next;
            }
            
            delete temp->next;
            
            temp->next=nullptr;
                        
            return head;
        }
};
