class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        // Creating the dp array with n + 1 elements, initialized to INT_MAX
        vector<int> dp(n + 1, INT_MAX);
        // Base case: 0 coins needed to make up value 0
        dp[0] = 0;

        sort(begin(coins), end(coins));

        // Populating the dp array
        for (int i = 1; i <= n; i++) {
            for (int c : coins) {
                if (i - c >= 0 && dp[i - c] != INT_MAX) {
                    dp[i] = min(dp[i], 1 + dp[i - c]);
                }
            }
        }
        // Returning the result
        if (dp[n] == INT_MAX) {
            return -1;
        } else {
            return dp[n];
}

    }
};
