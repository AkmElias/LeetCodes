class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)return false;
        set<ListNode*> s;
        
        while(head){
            if(s.count(head)==1){
                return true;
            }
            else{
                s.insert(head);
            }
            head = head->next;
        }
        return false;
    }
};
