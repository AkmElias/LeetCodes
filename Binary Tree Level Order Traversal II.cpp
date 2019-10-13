class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<pair<TreeNode*,int>>qu;
        queue<pair<int,int>>tq;
        
        vector<vector<int>>level;
        vector<int>v;
        
        if(!root){
            return level;
        }
        qu.push({root,1});
        TreeNode* start;
        int val;
        while(!qu.empty()){
            TreeNode* start = qu.front().first;
            int vl = qu.front().second;
            v.push_back(start->val);
            tq.push({start->val,vl});
            qu.pop();
            
            if(start->left){
                qu.push({start->left,vl+1});
            }
            if(start->right){
                qu.push({start->right,vl+1});
            }
            
        }
        vector<int>:: iterator it;
        vector<int>temp;
        int value = 1;
        
        while(!tq.empty()){
            if(tq.front().second==value){
            temp.push_back(tq.front().first);
            
            
            } else{
                value = value + 1;
                level.emplace_back(temp);
                temp.clear();
                temp.push_back(tq.front().first);
            }
             tq.pop();
        }
        //temp.push_back(value);
         level.emplace_back(temp);
        vector<vector<int>>result;
        vector<vector<int>>:: iterator itr;
        for(itr = level.end()-1;itr>=level.begin();itr--){
             result.emplace_back(*itr);
        }
       
        
     return result;   
    }
};
