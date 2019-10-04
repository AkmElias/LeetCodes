class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        return devide(nums, 0, nums.size() - 1);
        
    }
 private:   
  int devide(vector<int>& nums, int l, int r) {
        if(l>r)
            return INT_MIN;
      
      int m = (l+r) / 2, ml = 0, mr = 0;
      
      int lmax = devide(nums,l,m-1);
      int rmax = devide(nums,m+1,r);
      
      for(int i = m-1,sum = 0;i>=l;i--)
      {
          sum+=nums[i];
          ml = max(sum,ml);
      }
      
      for(int i = m+1,sum=0;i<=r;i++){
          sum+=nums[i];
          mr = max(sum,mr);
      }
      
      return max(max(lmax,rmax),ml+mr+nums[m]);
    }
};
