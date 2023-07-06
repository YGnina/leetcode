class Solution {
public:

    //binary search helper function
    int find(vector<int> &nums,int target){
        int n = nums.size();
        int low=0, high=n-1;

        while(low<=high){       
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb =find(nums, target);
        int ub =find(nums, target+1)-1;
        if(lb<n && ub<=n && nums[lb]==target && nums[ub]==target){
            return {lb,ub};
        }
        
        return {-1,-1};
    }
};
