class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i=0; i<n; i+=2*k) {
            string str = s.substr(i,k);//where i denotes the starting index from where the substring needs to be extracted and k denotes the size of the substr extracted
            reverse(str.begin(), str.end());
            s.replace(i, k, str);//where i denotes the start index of the portion to be replaced , k denotes the number of character to be replaced and str is the new string that will replace the portion
        }
        return s;
    }
};