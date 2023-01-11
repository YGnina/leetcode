class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
        for(auto i=0; i<nums.size(); i++){
            for(auto j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    return vector<int>{i,j};
                }
            }
        }

        return {};
    }
};
