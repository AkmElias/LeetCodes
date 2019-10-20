class BSTIterator {
    stack<TreeNode *> myStack;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode *temp = myStack.top();
        myStack.pop();
        pushAll(temp->left);
        return temp->val;
        
        
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !myStack.empty();
    }
    
    private:
    void pushAll(TreeNode* node){
        
        for(;node!=NULL; myStack.push(node), node = node->right );
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
