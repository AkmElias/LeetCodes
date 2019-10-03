class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *first = head;
        int length = 0;
        
        while(first){
            first = first->next;
            length++;
        }
        //return head;
        
        length -= n;
        first = dummy;
        while(length > 0){
            
            length--;
            first = first->next;
        }
        
        first->next = first->next->next;
        
        //cout<<length;
        return dummy->next;
    }
};
