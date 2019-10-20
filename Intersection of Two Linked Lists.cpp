class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        if(a==NULL||b==NULL)
            return NULL ;
        while(a!=NULL&&b!=NULL&&a!=b){
            
            a = a->next;
            b = b->next;
            
            if(a==b)return b;
            
            if(a==NULL)a = headB;
            if(b==NULL)b = headA;
        }
        return b;
        
    }
};
