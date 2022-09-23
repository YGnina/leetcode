public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int ones = 0;
        
        //Bit Shifting
    	while(n!=0) {
            ones = ones + (n & 1);
            n = n>>>1;
    	}
    	return ones;
    }
}
