class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        if(dividend == INT_MIN && divisor == 1){
            return INT_MIN;
        }

        unsigned long int m = abs(dividend);
        unsigned long int n = abs(divisor);

        int ans = 0;
        while(m>=n){
            long int mul = n;
            long int tmp = 1;

            while(mul <= m-mul){
                mul += mul;
                tmp += tmp;
            }
            ans += tmp;
            m -= mul;

        }
        if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) {
            return -ans;
        }

        return ans;
        
    }
};
