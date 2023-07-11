class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        int minjump = 0;

        for(i = nums.size()-2; i>=0; i--){
            minjump++;
            if(nums[i] >= minjump){
                minjump = 0;
            }
        }
        if(minjump){
            return false;
        }
        return true;
        
    }
};
