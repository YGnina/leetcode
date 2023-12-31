class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int len = nums.size();

        vector<int> temp = nums;

        sort(temp.begin(),temp.end());

        int mid = (len-1)/2;
        int last = len - 1;

        int p = 0;
        while(p < len){
            // if p & 1 is equal to 1, then p is odd.
            if(p & 1){
                nums[p] = temp[last];
                p++;
                last--;
            }else{  // even
                nums[p] = temp[mid];
                p++;
                mid--;
            }
        }
    }
};
