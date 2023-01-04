class Solution {
    public int maxPower(String s) {
        int cnt = 1;
        int max = 1;

        for(int i=1; i<s.length();i++){
            if(s.charAt(i)==s.charAt(i-1)){
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
