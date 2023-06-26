class Solution {

private:
    bool check(int i, int j, string &s){
        // left = i, right = j
        while(i < j){
            // if(s.at(left)!= s.at(right)){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int len = s.size();
        
        int max_len = 0;
        int idx = 0;

        // loop through the string from the beginning
        for(int i=0; i<len; i++){
            for(int j=i; j<len; j++){
                //check if it's palindrome
                if(check(i,j,s)){
                    //find out if it's the longest
                    if(j-i+1 > max_len){
                        //update longest length
                        max_len = j-i+1;
                        //update the begin index
                        idx = i;
                    }
                }
            }
        }
        //return the substring, [idx,max_len]
        return s.substr(idx,max_len);
    }

};
