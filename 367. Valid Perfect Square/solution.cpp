class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 1){
            return true;
        }
        
        int l = 0;
        int h = num/2;
        while(l<=h){
            long int mid = l + (h-l)/2;
            if((long long)mid*mid == num){
                return true;
            } 
            if((long long)mid*mid > num){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return false;
    }
};
