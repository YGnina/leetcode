class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> countMap;
        vector<int> ans;
        
        for (int n1 : nums1) {
            countMap[n1]++;
        }
        
        for (int n2 : nums2) {
            if (countMap.find(n2) != countMap.end() && countMap[n2] > 0) {
                ans.push_back(n2);
                countMap[n2]--;
            }
        }
        
        return ans;
    }
};
