class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        int level = maximum(root);
        return level;
    }
    
    int maximum(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        
        return  max(maximum(root->left),maximum(root->right))+1;
        
        
    }
};
