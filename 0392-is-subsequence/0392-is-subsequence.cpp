class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int m = s.size();
        if(s == "") return true;
        int cnt = 0;
        int index = 0;
        for(int i=0; i<m; i++) {
            for(int j=index; j<n; j++) {
                if(t[j] == s[i]) {
                    cnt++;
                    index = j+1;
                    break;
                }
                else {
                    continue;
                }
            }
            if(cnt == m) {
                return true;
            }
        }
        return false;
    }
};