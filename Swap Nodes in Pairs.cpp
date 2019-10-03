class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      
        ListNode **pp = &head, *a,*b;
        //return *pp;
        while((a = *pp) && (b = a->next)) {
           // cout<<a->val<<" "<<b->val<<endl;
            a->next = b->next;
           
            b->next = a;
           // cout<<a->val<<" "<<b->val<<endl;
            //cout<<b->val<<endl;
             *pp = b;
            //return *pp;
            //head  = a->next;
           // cout<<b->next->val<<" "<<b->val<<endl;
            pp = &(a->next);
            //cout<<pp->val;
        }
        return head;
    }
