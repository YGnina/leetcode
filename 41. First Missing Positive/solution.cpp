class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int len = nums.size();
        int missing = 1;

        for(int i=0; i<len; i++){
            if(nums[i]<=0){
                continue;
            }
            if(nums[i] == missing){
                missing ++;
            }else if(nums[i]>missing){
                return missing;
            }
        }
        return missing;
    }
};
