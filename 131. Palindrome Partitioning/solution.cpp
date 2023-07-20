class Solution {
public:

    bool isPalindorme(string s, int start, int end){
        while(start <= end){
            if(s[start]!=s[end]){
                return false;
            }else{
                start++;
                end--;
            }
        }
        return true;
    }

    void palindromePartition(int idx, vector<string>& ds, vector<vector<string>>& output, string s){
        if(idx == s.size()){
            output.push_back(ds);
            return;
        }
        for(int i=idx; i<s.size();i++){
            if(isPalindorme(s,idx,i)){
                ds.push_back(s.substr(idx,i-idx+1));
                palindromePartition(i+1,ds,output,s);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> output;
        vector<string> ds;
        palindromePartition(0, ds, output, s);
        return output;
    }

};
