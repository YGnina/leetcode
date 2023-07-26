class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = height[0];
        int rmax = height[n-1];

        int l = 1;
        int r = n-2;

        int water = 0;
        
        while(l <= r){
            if(height[l] >= lmax){
                lmax = height[l];
                l++;
            }else if(height[r] >= rmax){
                rmax = height[r];
                r--;
            }else if(lmax <= rmax && height[l] < lmax){
                water += lmax - height[l];
                l++;
            }else{
                water += rmax - height[r];
                r--;
            }
        
        }
        return water;
    }
};
