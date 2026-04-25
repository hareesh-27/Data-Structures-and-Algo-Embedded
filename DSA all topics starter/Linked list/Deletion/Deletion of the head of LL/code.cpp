
class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
       if(head == nullptr) return nullptr;

       ListNod* temp = head;
       head=head->next;
       delete temp;
       return head;
    }
};
