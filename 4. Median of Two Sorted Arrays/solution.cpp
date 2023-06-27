class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // merge two arrays
        vector<int> new_n;

        for(auto num: nums1){
            new_n.push_back(num);
        }

        for(auto num: nums2){
            new_n.push_back(num);
        }

        // sort and find the median
        sort(new_n.begin(), new_n.end());

        double ans = 0;
        int len = new_n.size();
      
        // if even length, it's in the middle
        if(len%2){
            return new_n[len/2];
        }else{
            return (new_n[len/2-1]+new_n[len/2])/2.0;
        }

        return -1;

    }
};
