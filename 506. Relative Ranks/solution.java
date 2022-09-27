class Solution {
    public String[] findRelativeRanks(int[] score) {
        int l = score.length;
        
        String[] result = new String[l];
        
        PriorityQueue<Integer> pq = 
            new PriorityQueue<>((a,b)->score[b]-score[a]);
        
        for(int i=0; i<l; i++){
            pq.add(i);
        }
        
        int i = 1;
        while(!pq.isEmpty()){
            int idx = pq.poll();
             if(i==1){
                 result[idx] = "Gold Medal";
             }else if(i == 2){
                 result[idx] = "Silver Medal";
             }else if(i == 3){
                 result[idx] = "Bronze Medal";
             }else{
                 result[idx] = Integer.toString(i);
             }
            i++;
        }
        
        return result;
    }
}
