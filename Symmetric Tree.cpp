class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>bfs;
        bfs.push(root);
        bfs.push(root);
        while(!bfs.empty()){
            
            TreeNode* a = bfs.front();
            bfs.pop();
            TreeNode* b = bfs.front();
            bfs.pop();
            
            if(a == NULL && b == NULL)
                continue;
            else if(a == NULL || b == NULL)
                return false;
            if(a->val!= b->val)
                return false;
            bfs.push(a->right);
            bfs.push(b->left);
            bfs.push(a->left);
            bfs.push(b->right);
        }
        return true;
    }
};
