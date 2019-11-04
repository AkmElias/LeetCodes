/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        deque<int>nums;
        
        if(!head)return true;
        
        while(head){
            
            nums.push_back(head->val);
            head = head->next;
        }
        
        while(nums.size()>1){
            
            if(nums.back()!=nums.front())
                return false;
            nums.pop_back();
            nums.pop_front();
        }
        
        return true;
    }
};
