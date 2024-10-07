class Solution {
public:
    int solve(vector<int>& nums) {
        int n = nums.size();
        int prev2 = 0;
        int prev1 = nums[0];
        for(int i=1; i<n; i++) {
            int inc = prev2 + nums[i];
            int exc = prev1;
            int curr = max(inc, exc);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> first, last;
        for(int i=0; i<n; i++) {
            if(i != n-1) {
                first.push_back(nums[i]);
            }
            if(i != 0) {
                last.push_back(nums[i]);
            }
        }
        return max(solve(first), solve(last));
    }
};