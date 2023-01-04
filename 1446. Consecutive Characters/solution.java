class Solution {
    public int maxPower(String s) {
        int cnt = 1;
        int max = 1;

        for(int i=0; i<s.length()-1;i++){
            if(s.charAt(i+1)==s.charAt(i)){
                cnt++;
            }else{
                cnt = 1;
            }

            if(max < cnt){
                max = cnt;
            }
        }

        return max;

    }
}
