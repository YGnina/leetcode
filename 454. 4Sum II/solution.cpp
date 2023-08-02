class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int len = nums1.size();
        int count = 0;

        // Create a hash table to store the frequency of sums of elements from nums1 and nums2
        unordered_map<int, int> sumCounts;

        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                // Calculate all possible sums for the first group
                int sum = nums1[i] + nums2[j];
                // Update frequency accordingly
                sumCounts[sum]++;
            }
        }

        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                // sum + targetSum = 0
                // targetSum = -sum
                int targetSum = -(nums3[i] + nums4[j]);

                // check if targetSum exists
                // count = the number of quadruples that sum to zero
                count += sumCounts[targetSum];
            }
        }

        return count;
    }
};
