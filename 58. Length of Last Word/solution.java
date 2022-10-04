class Solution {
    public int lengthOfLastWord(String s) {
        int length=0;
        for(int i=s.length()-1; i>=0;i--){
            //if it's not a ' ' at this position
            if(s.charAt(i) != ' '){
                //implement length
                length ++;
            }else{ //if it's a ' '
                //we already found the last word
                if(length > 0){
                    return length;
                }
            }
            
        }
        return length;
    }
}
