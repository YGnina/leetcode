class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int smax = INT_MIN;

        for(int n : nums){
            sum += n;
            // keep the max sum
            smax = max(sum,smax);
            if(sum<0){
                sum = 0;
            }
        }
        return smax;
    }
};
