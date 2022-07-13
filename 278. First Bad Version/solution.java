/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        
        if (n <= 0 || !isBadVersion(n)) {
            return -1;
        }
        
        if (isBadVersion(1)) {
            return 1;
        }
        
        int left = 1;
        int right = n;
        
        while(left<right){
            int middle = left + (right-left)/2;
            if(isBadVersion(middle)==false){
                left = middle + 1;
            }else{
                right = middle;
            }
        }
        return left;
    }
}
