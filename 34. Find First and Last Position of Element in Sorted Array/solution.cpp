class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans = {-1,-1};

        if(nums.empty()){
            return {-1,-1};
        }
        for(int i=0; i<len; i++){
            if(nums[i] == target){
                ans[0] = i;
                break;
                
            }
        }
        for(int j=len-1; j>= 0; j--){
            if(nums[j] == target){
                ans[1] = j;
                break;
            }
        }

        return ans;
    }
};
