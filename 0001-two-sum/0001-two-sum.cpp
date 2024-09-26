class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        while(l < r) {
            int sum = sorted[l] + sorted[r];
            if(sum == target) break;
            else if(sum < target) l++;
            else r--;
        } 
        vector<int> result;
        for(int i=0; i<n; i++) {
            if(nums[i] == sorted[l] || nums[i] == sorted[r]) {
                result.push_back(i);
            }
        }

        return result;
    }
};