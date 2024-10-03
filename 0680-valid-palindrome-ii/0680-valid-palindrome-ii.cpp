class Solution {
public:
    bool check(string s, int left, int right) {
        while(left <= right) {
            if(s[left] != s[right]) {
                return false;
            }
            else {
                left++;
                right--;
            }
            
        }
        return true;
        
    }

    bool validPalindrome(string s) {
        int n = s.size();
        //at most one character so  if we dont delete any then also it works
        int left = 0;
        int right = n-1;
        while(left <= right) {
            if(s[left] != s[right]) {
                bool checker = check(s, left+1, right) || check(s,left, right-1); 
                if(checker) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};