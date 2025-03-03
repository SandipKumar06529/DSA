class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = prices[0];
        int Max_diff = 0;
        for(int i=1; i<prices.size(); i++){
            min_value = min(min_value, prices[i]);
            Max_diff = max(Max_diff,prices[i]-min_value);
    
        }
        return Max_diff;
        
    }
};