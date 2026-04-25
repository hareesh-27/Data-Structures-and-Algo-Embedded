class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            
            if(head==nullptr || head->next==nullptr) return head;

            ListNode* zeroHead = new ListNode(-1);
            ListNode* oneHead = new ListNode(-1);
            ListNode* twoHead = new ListNode(-1);

            ListNode* zero=zeroHead;
            ListNode* one=oneHead;
            ListNode* two=twoHead;

            ListNode* temp=head;

            while(temp != nullptr)
            {
                if(temp->data==0)
                {
                    zero->next=temp;
                    zero=temp;
                }
                else if(temp->data==1)
                {
                    one->next=temp;
                    one=temp;
                }
                else
                {
                    two->next=temp;
                    two=temp;
                }

                temp=temp->next;
            }

            zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
            one->next = twoHead->next;
            two->next = nullptr;

            ListNode* new_head = zeroHead->next;

            delete zeroHead;
            delete oneHead;
            delete twoHead;

            return new_head;         
        }
};
