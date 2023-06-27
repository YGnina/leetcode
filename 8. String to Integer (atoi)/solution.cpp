class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;

        int len = s.size();

        int i = 0;

        // remove white spae
        while(s[i] == ' '){
            i++;
        }

        // check sign
        int sign = 1;
        if(i<len && (s[i]== '+' || s[i]== '-')){
            if(s[i]=='-'){
                sign = -1;
            }
            i++;
        }

        while(i<len && isdigit(s[i])){
            if(ans > INT_MAX/10 || (ans == INT_MAX/10 && s[i] >'7')){
                if(sign == -1){
                    return INT_MIN;
                }else{
                    return INT_MAX;
                }
            }
            ans = ans * 10 + (s[i]-'0');
            i++;
        }

        return ans * sign;
    }
};
