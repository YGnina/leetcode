class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int inx = 0;
        for(int i=0; i<nums.length;i++){
            if(nums[i] != i){
                return i;
            }
            inx = i;
        }
       return inx+1;
    }
}
