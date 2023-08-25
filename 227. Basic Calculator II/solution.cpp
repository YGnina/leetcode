class Solution {
public:
    int calculate(string str) {
        int len = str.size();
        stack<int> s;
        char sign = '+';
        int res, tmp = 0;

        for(unsigned int i=0; i<len; i++){
            if(isdigit(str[i])){
                tmp = 10 * tmp + str[i]-'0';
            }
            if(!isdigit(str[i]) && !isspace(str[i]) || i == len-1){
                if(sign == '-'){
                    s.push(-tmp);
                }else if(sign == '+'){
                    s.push(tmp);
                }else{
                    int num;
                    if(sign == '*'){
                        num = s.top() * tmp;
                    }else{
                        num = s.top() / tmp;
                    }
                    s.pop();
                    s.push(num);
                }
                sign = str[i];
                tmp = 0;

            }
        }
        while(!s.empty()){
            res += s.top();
            s.pop();
        }
        return res;
    }
};
