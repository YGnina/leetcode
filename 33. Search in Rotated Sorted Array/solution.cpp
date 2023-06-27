class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        if(len < 0){
            return -1;
        }

        int idx = 0;

        for(int i = 0; i<len;i++){
            if (nums[i] == target){
                idx = i;
                return idx;
            }
        }
        return -1;
    }
};
