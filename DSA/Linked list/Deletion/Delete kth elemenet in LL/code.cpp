class Solution {
    public:
        ListNode* deleteKthNode(ListNode* &head, int k) {
            int cnt=0;
        
            //empty ll
            if(head==nullptr) return nullptr;

            //if k=1 (head)
            if(k==1)
            {
                ListNode* temp = head;
                head=head->next;
                delete temp;
                return head;
            }

            ListNode* temp=head; ListNode* prev=nullptr;
            while(temp!=nullptr)
            {
                cnt++;

                if(cnt==k)
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
