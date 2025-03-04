class Solution {
public:
    int maxProfit(vector<int>& prices) {  
        int profit=0;
        int max_diff=0;
        for(int i =1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){
                max_diff = prices[i]- prices[i-1];    
                profit =profit + max_diff;
            }                                
        }
        return profit;
        
    }
};