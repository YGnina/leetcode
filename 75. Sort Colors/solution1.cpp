class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int max = nums.size() - 1; max > 0; max--) {
            bool swapped = false;
            for (int i = 0; i < max; i++) {
                int left = nums[i];
                int right = nums[i + 1];
                if (left > right) {
                    nums[i + 1] = left;
                    nums[i] = right;
                    swapped = true;
                }
            }
        if (!swapped) break;
        }
    }
};
