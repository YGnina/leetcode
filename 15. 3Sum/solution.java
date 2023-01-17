class Solution {
    public  List<List<Integer>> threeSum(int[] nums) {
        //create a set of a list of Intergers
        Set<List<Integer>> res  = new HashSet<>();

        //if no element
        if(nums.length==0){
            //return empty  list
            return new ArrayList<>(res);
        } 

        //sort the list
        Arrays.sort(nums);

        //go over the list from the first one
        for(int i=0; i<nums.length-2;i++){
            //j is the one after i
            int j =i+1;
            //k = the last one, which should be the biggest?
            int k = nums.length-1;

            //loop until the end
            while(j<k){
                //calculate the sum
                int sum = nums[i]+nums[j]+nums[k];

                //if sum = 0
                if(sum==0){
                    //add to the set
                    res.add(Arrays.asList(nums[i],nums[j],nums[k]));
                    //then move j and k
                    j++;
                    k--;
                }
                //if sum is positive, move k to the front to get a smaller k
                else if (sum >0) k--;
                //if sum is negative, move j to the back to get a bigger j
                else if (sum<0) j++;
            }

        }
        return new ArrayList<>(res);
    }
}

