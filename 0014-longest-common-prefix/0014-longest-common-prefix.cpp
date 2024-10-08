class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(begin(strs), end(strs));
        string first = strs[0];
        string last = strs[n-1];
        //we are choosing the first and last string because they will be the most different
        string res = "";
        for(int i=0; i<first.size(); i++) {
            //as we just need to check the longest common prefix not characters, prefix
            if(first[i] == last[i]) {
                res += first[i];
            }
            else {
                break;
                //consecutive hona chahiya agr ek ke baad ek nhi hua toh phir break kr jao
            }
        }
        return res;
    }
};