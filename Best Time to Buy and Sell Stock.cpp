class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxres = 0;
        for(int i = 0; i<prices.size();i++) {
            
            minPrice = min(minPrice,prices[i]);
            maxres = max(maxres,prices[i]-minPrice);
            
        }
        
        return maxres;
        
    }
};
