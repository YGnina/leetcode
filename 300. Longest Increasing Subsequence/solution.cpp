class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            auto n = lower_bound(ans.begin(),ans.end(),nums[i]);
            if(n == ans.end()){
                ans.push_back(nums[i]);
            }else{
                *n = nums[i];
            }
        }
        return ans.size();
    }
};
