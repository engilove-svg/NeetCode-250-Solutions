//Best time to Buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {          // buy day
        for (int j = i + 1; j < n; j++) {  // sell day
            int profit = prices[j] - prices[i];
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}
};
