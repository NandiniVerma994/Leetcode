class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> map1(26,0);
        vector<int> map2(26,0);

        for(auto ch: words[0]) {
            map1[ch-'a']++;
        }

        for(int i=1; i<n; i++) {
            for(auto ch: words[i]) {
                map2[ch-'a']++;
            }
            for(int i=0; i<26; i++) {
                map1[i] = min(map1[i], map2[i]);
                map2[i] = 0;//if we dont do this then minimum frequency count nhi hoga ...hme wo character dekhna h jo saare words me aa rhe ...next time phir se wo sb characters update hoga agr ek v baar nhi aata then 0 rhega aur vo update ho jayega hash1 me
            }
        }

        vector<string> result;
        for(int i=0; i<26; i++) {
            if(map1[i] > 0) {//means ek baar toh wo saare words me aaya hi h
                int count = map1[i];
                while(count--) {
                    char x = i+'a';
                    string s;
                    s = x;
                    result.push_back(s);
                }
            }
        }
        return result;
    }
};