class Solution {
public:
//TC -> O(amt * coins)
    int solve(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for(int i=1; i<=amount; i++) {
            //solving for till amounts dp[1], dp[2], .....dp[11] and for each amount solving for the coins
            for(int j=0; j<coins.size(); j++) {
                if(i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX) {
                    dp[i] = min(dp[i], 1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount] == INT_MAX) {
            return -1;
        }
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        return solve(coins, amount);
    }
};