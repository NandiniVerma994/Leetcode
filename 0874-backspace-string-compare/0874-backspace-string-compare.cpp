class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> a;
        vector<char> b;
        for(int i=0; i<s.size(); i++) {
            if(isalpha(s[i])) {
                a.push_back(s[i]);
            }
            else if(s[i] == '#' && !a.empty()) {
                a.pop_back();
            }
        }
        
        for(int i=0; i<t.size(); i++) {
            if(isalpha(t[i])) {
                b.push_back(t[i]);
            }
            else if(t[i] == '#' && !b.empty()) {
                b.pop_back();
            }
        }
        int n = a.size();
        int m = b.size();
        if(n != m) {
            return false;
        }
        else if(n == m) {
            for(int i=0; i<n; i++) {
                if(a[i] == b[i]) {
                    continue;
                }
                else {
                    return false;
                }
            }
        }
        return true;

    }
};