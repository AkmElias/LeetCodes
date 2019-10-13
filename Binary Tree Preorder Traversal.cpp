class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        preOrder(root, res);
        return res;
    }
    
    void preOrder(TreeNode* root, vector<int>&res){
        
        if(!root)
            return;
         res.push_back(root->val);
         preOrder(root->left,res);
         preOrder(root->right,res);
    }
};
