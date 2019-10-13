class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
          map<vector<int>, int>mp;
        subsets(result,nums,temp,mp,0);
        return result;
    }
    
    void subsets(vector<vector<int>> &result, vector<int> &nums,vector<int> temp,   map<vector<int>,int> &mp, int begin){
      
        if(mp[temp]!=1){
        result.push_back(temp);
            mp[temp] = 1;
        }
        
        for(int i = begin; i<nums.size();i++){
            temp.push_back(nums[i]);
            subsets(result, nums, temp,mp, i+1);
            temp.pop_back();
        }
        
    }
};
