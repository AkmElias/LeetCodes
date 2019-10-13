public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>temp;
        
        recursion(result, nums, temp, 0);
        
        return result;
    }
    void recursion( vector<vector<int>> &result, vector<int> &nums,vector<int>temp, int s) {
        
        result.push_back(temp);
        
        //temp.clear();
        
        for(int i = s;i<nums.size();i++){
            
            temp.push_back(nums[i]);
            
            recursion(result,nums,temp,i+1);
            //temp.clear();
           temp.pop_back();
            
        }
    }
};
