class Solution {
public:
    string getPermutation(int n, int k) {
        string nums="";
        for(int i = 1; i<=n ; i++)
            nums+=i+48;
        
        string res;
        int i = 1;
        do{
            
            if(i==k)
                res =  nums;
            i++;
            
        }while(next_permutation(nums.begin(), nums.end()));
        
        return res;
    }
};
