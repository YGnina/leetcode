//The ^ is a bitwise XOR operator. It works like this:
//00010 ^ 00010 = 00000;
//00000 ^ 10101 = 10101;
//^ returns 1 if the integers are different


class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for(int i : nums) {
            result ^= i;
        }
        return result;
    }
}
