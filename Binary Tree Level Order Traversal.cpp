class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>result;
        vector<int>tmp;
        queue<TreeNode*>qu;
        if(!root)return result;
        
        qu.push(root);
        int count = 1;
        while(!qu.empty()){
            
            if(qu.front()->left){
                qu.push(qu.front()->left);
            }
            if(qu.front()->right){
                qu.push(qu.front()->right);
            }
            tmp.push_back(qu.front()->val);
            qu.pop();
            
            if(--count==0){
                result.push_back(tmp);
                tmp.clear();
                count = qu.size();
            }
            
        }
        
        return result;
    }
    
    
};
