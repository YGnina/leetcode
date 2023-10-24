class Solution {
public:
    int numDecodings(string s) {
        // a message cannot start with '0'.
        if(s.front() == '0'){
            return 0;
        }

        int len = s.size();
        vector<int> dp(len+1);

        dp[0] = 1;

        for(int i=1; i<=len; i++){
            if(s[i-1] != '0'){
                dp[i] = dp[i-1];
            }
            if(i >= 2){
                int x = (s[i-2] - '0') * 10 + s[i-1] - '0';

                if(x >= 10 && x <= 26){
                    dp[i] += dp[i-2];
                }
            }
        }
        return dp[len];
    }
};
