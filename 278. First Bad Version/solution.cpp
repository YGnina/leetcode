// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//1,2,3,4,5
//g,g,g,b,b
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        
        while(low < high){
            int mid = low + (high-low)/2;
            if(!isBadVersion(mid)){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
        return low;
    }
};
