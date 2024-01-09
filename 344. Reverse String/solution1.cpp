// Runtime 7ms Beats 99.43% of users with C++
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        
        while(start<end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
      
    }
};
