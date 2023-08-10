class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int begin = 0;
        int last = len-1;
        while(last>begin){
            swap(s[begin],s[last]);
            begin++;
            last--;
        }
    }
};
