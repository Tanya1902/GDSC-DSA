class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            buy = min(prices[i],buy);
            profit= max(prices[i+1]-buy,profit);
        }
        return profit;
    }
};