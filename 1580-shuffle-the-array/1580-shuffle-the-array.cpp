class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shufArr;
        int m = nums.size();
        for(int i=0; i<n; i++) {
            shufArr.push_back(nums[i]);
            shufArr.push_back(nums[i+n]);
        }
        return shufArr;
    }
};