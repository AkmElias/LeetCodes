class Solution {
public:
     vector<int>res;
    vector<int> rightSideView(TreeNode* root) {
       
        if(!root)return res;
        dfs(root,0);
        return res;
    }
    
void dfs(TreeNode* root,int depth)
{
    if(res.size()==depth){
        res.push_back(root->val);
    }
        // if we visit right child first, then the first node we reach on this depth 
	    // is the rightmost node on this depth
        if(root->right) dfs(root->right,depth+1);
        if(root->left)dfs(root->left,depth+1);
    
}
};
