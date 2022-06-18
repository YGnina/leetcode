//idea:pivor index的左边数字之和=右边数字之和
//     => 数字总和-nums[pivor index] = 左边数字之和x2


class Solution {
    public int pivotIndex(int[] nums) {
        int sum = 0;
        int left = 0;
        
        for(int i=0; i<nums.length;i++){
            sum += nums[i];
        }
        
        for(int i=0; i<nums.length;i++){
            if(left*2 == (sum-nums[i])){
                return i;
            }
               left += nums[i];
        }
        return -1;
    }
}
