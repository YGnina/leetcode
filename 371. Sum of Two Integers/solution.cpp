class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int carry = (unsigned int)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;

        // example, a=6, b=3
        // 110 011

        // 1st
        // carry = (110 & 011) << 1 = 010 << 1 = 100 = 4
        // a = 110 ^ 011 = 101 = 5
        // b = 4

        // 2nd
        // carry = (100 & 101) << 1 = 100 << 1 = 1000 = 8
        // a = 100 ^ 101 = 001 = 1
        // b = 8

        // 3rd
        // carry = (0001 & 1000) << 1 = 0000 << 1 = 0
        // a = 0001 ^ 1000 = 1001 = 9
        // b = 0

        // end
    }
};
