 vector<vector<int>> permute(vector<int>& nums) {
        // Heap's Algorithm to generate permutations
      vector<vector<int>>result;
      Permutation(result,nums, nums.size());
        return result;
    }
    
    void Permutation(vector<vector<int>> &result, vector<int> &nums, int size) {
        
       if(size==1)
           result.push_back(nums);
        else{
            for(int i = 0;i<size;i++){
                
                Permutation(result,nums,size-1);
                size%2==1? swap(nums[0],nums[size-1]): swap(nums[i], nums[size-1]);
            }
        }
    }
};
