class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        postOrder(root,res);
        return res;
    }
    private:
    void postOrder(TreeNode* root, vector<int>&res) {
        
        if(root==NULL)
            return;
        postOrder(root->left,res);
        postOrder(root->right,res);
        res.push_back(root->val);
    }
};
