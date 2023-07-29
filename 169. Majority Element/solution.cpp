class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> map;
        int max = nums.size()/2;
        for(int n: nums){
            map[n]++;
            if(map[n]>max){
                return n;
            }
        }
        return -1;
    }
};
