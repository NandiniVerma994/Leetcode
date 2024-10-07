class Solution {
public:
    int solve(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int prev2 = 0;//for n < 0
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
        return solve(nums);
    }
};