class Solution {
public:
    double myPow(double x, int n) {
        //base case
        if(n==0){
            return 1;
        }

        if(n==1){
            return x;
        }

        // Perform Binary Exponentiation.
        if(n>0){
            // If 'n' is odd we perform Binary Exponentiation on 'n - 1' and multiply result with 'x'.
            if(n%2==0){
                return myPow(x*x, n/2);
            }
            // Otherwise we calculate result by performing Binary Exponentiation on 'n'.
            else{
                return x*myPow(x*x, n/2);
            }
        }else{ // negative power = inverse
            n= abs(n);
            if(n%2==0){
                return 1/myPow(x*x, n/2);
            }
            else{
                return 1/(x*myPow(x*x, n/2));
            }
        }
    }
};
