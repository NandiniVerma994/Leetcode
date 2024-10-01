class Solution {
public:
    //BOTTOM UP
    int rob(vector<int> &nums) {
        int n = nums.size();
        vector<int> t(n+1, 0);
        if(n == 1) {
            return nums[0];
        }
        //t[i] is the money stolen when you have i houses
        t[0] = 0;
        //taking first house means skipping the last house
        for(int i=1; i<=n-1; i++) {
            int skip = t[i-1];
            int steal = nums[i-1] + ((i-2 >= 0) ? t[i-2] : 0);
            t[i] = max(skip, steal);
        }
        int result1 = t[n-1];
        t.clear();

        //skipping first house
        t[0] = 0;
        t[1] = 0;
        for(int i=2; i<=n; i++) {
            int skip = t[i-1];
            int steal = nums[i-1] + ((i-2 >= 0) ? t[i-2] : 0);
            t[i] = max(skip, steal);
        }
        int result2 = t[n];
        return max(result1, result2);
    }
};