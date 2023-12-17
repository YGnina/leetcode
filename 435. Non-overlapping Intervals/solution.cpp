class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int len = intervals.size();

        sort(intervals.begin(),intervals.end(),cmp);

        int prev= 0;
        int cnt = 1;

        for(int i=1; i<len; i++){
            if(intervals[i][0] >= intervals[prev][1]){
                prev = i;
                cnt++;
            }
        }
        return len - cnt;
        
    }
};
