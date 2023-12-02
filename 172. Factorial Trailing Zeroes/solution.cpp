class Solution {
public:
    int trailingZeroes(int n) {
        // just find 5
        // no 5, no trailing zero
        
        int ans = 0;

        while(n){
            n = n/5;
            ans = ans + n;
        }

        return ans;
        
    }
};
