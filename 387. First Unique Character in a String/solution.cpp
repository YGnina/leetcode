class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.size();

        if(len == 1){
            return -1;
        }

        for(int i=0; i<len;i++){
            int flag = 1;
            for(int j=0; j<len; j++){
                if(i != j && s[i] == s[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                return i;
            }
            
        }

        return -1;
        
    }
};
