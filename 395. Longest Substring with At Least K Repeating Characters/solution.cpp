class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        unordered_map<char,int> m;
        for(char c:s) {
            m[c]++;
        }
        int indx = 0;
        while(indx<n && m[s[indx]]>=k) indx++;
        if(indx == n) return n;
        int left = longestSubstring(s.substr(0,indx),k);
        int right = longestSubstring(s.substr(indx+1,n-indx-1),k);
        return max(left,right);
    }
};
