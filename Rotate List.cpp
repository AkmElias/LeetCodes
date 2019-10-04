class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0)
            return head;
        
      ListNode* node = head;
        int size = 1;
        
        while(node->next!=NULL){
            size++;
            node = node->next;
        }
        
        k%=size;
        
        node->next = head;
        while(--size>=k){
            node = node->next;
        }
        
        ListNode* first = node->next;
        node->next = NULL;
        return first;
        
    }
};
