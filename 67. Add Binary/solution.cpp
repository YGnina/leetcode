class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans;
        
        int s1 = a.size()-1;
        int s2 = b.size()-1;
        
        while(s1>=0 || s2>=0 || carry){
            if(s1>=0){
                carry += a[s1]-'0';
                s1--;
            }
            if(s2>=0){
                carry += b[s2]-'0';
                s2--;
            }
            
            ans += carry % 2 + '0';
            carry /= 2;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
