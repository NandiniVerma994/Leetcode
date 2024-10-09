class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res = "";
        string fnres = "";
        int i = 0;
        while(i < n) {
            if(s[i] != ' ') {
                res += s[i++];
            }
            else if(s[i] == ' ') {
                reverse(res.begin(), res.end());
                fnres += res;
                fnres += ' ';
                res = "";
                i++;
            }
        }
        reverse(res.begin(), res.end());
        fnres += res;
       
        return fnres;
    }
};