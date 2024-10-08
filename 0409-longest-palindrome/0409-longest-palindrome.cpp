class Solution {
public:
    //"aaaAaaaa"
    int longestPalindrome(string s) {
        int n = s.size();
        map<char,int> mpp;
        for(int i=0; i<n; i++) {
            mpp[s[i]]++;
        }
        int cnt1 = 0;
        int flag = 1;
        int cnt2 = 0;
        for(auto it: mpp) {
            if(it.second % 2 == 0) {
                cnt1 = cnt1 + (it.second);
            }
            else {
                cnt1 += it.second - 1;  // Add the even part of the odd frequency
                cnt2 = 1;  // We can have at most one odd character in the middle
            }
            
        }
        return cnt1+cnt2;
    }
};