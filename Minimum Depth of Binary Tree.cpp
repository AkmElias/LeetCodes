class Solution {
public:
    int minDepth(TreeNode* root) {
        
        queue<pair<TreeNode*, int>>qu;
        if(root==NULL)return 0;
        qu.push({root,1});
        int currlevel,minimumlevel = 1;
        
        while(qu.size()){
            TreeNode* currNode = qu.front().first;
            currlevel = qu.front().second;
            qu.pop();
            
            if(currNode->left==NULL && currNode->right==NULL){
               return minimumlevel = currlevel;
            }
            
            if(currNode->left){
                qu.push({currNode->left,currlevel + 1});
            }
            if(currNode->right){
                qu.push({currNode->right,currlevel + 1});
            }
        }
        return minimumlevel;
    }
};
