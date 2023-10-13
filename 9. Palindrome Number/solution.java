class Solution {
    public boolean isPalindrome(int x) {
        String number = String.valueOf(x);
        String reversedNumber = "";
        for (int i = number.length()-1; i >= 0; i-- ){
            reversedNumber = reversedNumber + number.charAt(i);
        }
        if (number.equals(reversedNumber)){
            return true;
        }else{
            return false;
        }
    }
}
