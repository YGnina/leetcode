class Solution {
    public boolean isHappy(int n) {
        if(n==1){
            return true;
        }
        
        while (n >= 10) {
            int sum = 0;
            while (n != 0) {
                int d = n % 10;     //个位数
                n = n / 10;         //十位数
                sum += d*d;
            }
            n = sum;
        }
        return n == 1 || n == 7;
    }
}
