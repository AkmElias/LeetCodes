class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        Inorder(root, result);
        return result;
    } 
    
    void Inorder(TreeNode* root, vector<int> &result){
        
        if(!root)
            return;
        Inorder(root->left, result);
        result.push_back(root->val);
        Inorder(root->right, result);
        
        
    }
};
