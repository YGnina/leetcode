class Solution {
    public int[] twoSum(int[] nums, int target){
        HashMap<Integer,Integer> table = new HashMap<Integer,Integer>();
        
        for(int i=0; i<nums.length;i++){
            int difference = (Integer)target-nums[i];
            
            if(table.containsKey(difference)){
                int toReturn[] = {table.get(difference),i};
                return toReturn;
            }
            table.put(nums[i],i);
        }
        return null;
    }
}
