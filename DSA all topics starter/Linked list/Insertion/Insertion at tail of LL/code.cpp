class Solution {
    public:
        ListNode* insertAtTail(ListNode* &head, int X) {
            ListNode* temp = head;
            while(temp->next != nullptr)
            {
                temp=temp->next;
            }
            ListNode* newNode = new ListNode(X);
            temp->next=newNode;
            return head;

        }
};
