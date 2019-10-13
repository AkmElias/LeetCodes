class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
     vector<vector<int>>result;
        vector<int>temp;
        if(n<k)
            return result;
        combinations(result, temp,0,0,n,k);
        return result;
            
    }
    
    void combinations(vector<vector<int>> &result, vector<int> temp, int start, int num,int n, int k){
        
        if(num==k){
            result.push_back(temp);
            return;
        }
        for(int i = start; i<n;i++){
            temp.push_back(i+1);
            combinations(result, temp, i+1, num+1,n,k);
            temp.pop_back();
        }
    }
};
