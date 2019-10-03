class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> >result;
        map<vector<int>,int>mp;
        uniquePermutation(result,mp,nums,nums.size());
        return result;
    }
    
  void uniquePermutation(vector<vector<int>>&result, map<vector<int>,int>&mp, vector<int>&nums, int size) {
        
        if(size==1){
            if(mp[nums]!=1){
                 
                mp[nums] = 1;
                result.push_back(nums);
            }
        } else {
            
            for(int i = 0 ; i<size; i++) {
                
                uniquePermutation(result,mp,nums,size-1);
                
                size%2 == 0 ? swap(nums[i],nums[size-1]) : swap(nums[0], nums[size-1]);
            }
        }
    }
};
