class Solution {
public:
  string reverseWords(string s) {
    stringstream ss(s);
    stack<string> st;
    string w;
    while (ss >> w)
      st.push(w);
    string ans;
    while (!st.empty()) {
      ans += st.top();
      st.pop();
      if (!st.empty()) ans += ' ';
    }
    return ans;
  }
};
