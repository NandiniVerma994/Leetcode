class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=0; i<n; i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else if(s[i] == st.top()) {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string str = "";
        while(!st.empty()) {
            char ch = st.top();
            st.pop();
            str += ch;
        }
        reverse(str.begin(), str.end());
        return str;
        
    }
};