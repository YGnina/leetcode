class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int num : nums) {
            map[num]++;
        }
        
        vector<pair<int,int>> frequency(map.begin(),map.end());

        sort(frequency.begin(), frequency.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(frequency[i].first);
        }

        return result;
    }
};
