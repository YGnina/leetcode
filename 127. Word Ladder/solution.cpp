class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(), wordList.end(),endWord)==wordList.end()){
            return 0;
        }
        
        set<string> s;
        for(auto w : wordList){
            s.insert(w);
        }

        queue<string> q;
        q.push(beginWord);

        int d = 0;
        while(!q.empty()){
            d++;
            int len = q.size();
            while(len--){
                string cur = q.front();
                q.pop();
                for(int i=0; i<cur.length(); i++){
                    string tmp = cur;
                    for(char c = 'a'; c<='z'; c++){
                        tmp[i] = c;
                        if(tmp == cur){
                            continue;
                        }
                        if(tmp==endWord){
                            return d+1;
                        }
                        if(s.find(tmp) != s.end()){
                            q.push(tmp);
                            s.erase(tmp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
