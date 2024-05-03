class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int dp[n];
        dp[0] = 0;
        int mn = prices[0];
        for(int i=1;i<n;i++)
        {
            dp[i] = max(dp[i-1],prices[i] - mn);
            if(mn > prices[i]) mn = prices[i];
        }
        return dp[n-1];
    }
};