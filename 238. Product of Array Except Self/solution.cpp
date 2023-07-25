class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        // bool hasZero = false;
        int numOfZero = 0;

        int len = nums.size();
        int product = 1;
        for (int i = 0; i < len; i++) {
            if (nums[i] != 0) {
                product *= nums[i];
            } else {
                numOfZero++;
                continue; 
            }
        }

        if (numOfZero>0) {
            for (int i = 0; i < len; i++) {
                if (nums[i] != 0) {
                    ans[i] = 0;
                }else{
                    if(numOfZero >= 2 ){
                        ans[i] = 0;
                    }else{
                        ans[i] = product;
                    }
                }
            }
        } else {
            for (int i = 0; i < len; i++) {
                ans[i] = product / nums[i];
            }
        }

        return ans;
    }
};
