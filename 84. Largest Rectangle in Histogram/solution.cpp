class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty()){
            return 0;
        }
        return maxArea(heights, 0, heights.size()-1);
    }

    int combine(vector<int>& heights, int l, int m, int r){
        // start form middle
        int i=m, j=m+1;
        int area = 0;
        int h = min(heights[i],heights[j]);

        while(i>=l && j<=r){
            h=min(h, min(heights[i], heights[j]));
            area = max(area, (j-i+1) * h);
            if(i==l){
                j++;
            }else if (j==r){
                i--;
            }else{
                if(heights[i-1] > heights[j+1]){
                    i--;
                }else{
                    j++;
                }
            }
        }
        return area;
    }

    int maxArea(vector<int>& heights, int l, int r){
        if(l==r){
            return heights[l];
        }

        int m = l + (r-l)/2;
        // from left half
        int area = maxArea(heights, l, m);
        // from right half
        area = max(area, maxArea(heights, m+1, r));
        // across the middle
        area = max(area, combine(heights,l,m,r));
        return area;
    }
};
