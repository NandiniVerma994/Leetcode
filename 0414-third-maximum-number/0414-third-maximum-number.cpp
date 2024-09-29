class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long thrdMax = LONG_MIN;
        long secMax = LONG_MIN;
        long max = LONG_MIN;
        for(int i=0; i<n; i++) {
            if(nums[i] > max) {
                thrdMax = secMax;//-1
                secMax = max;//-1//1
                max = nums[i];//1//2
            }
            else if(nums[i] > secMax && nums[i] < max) {
                thrdMax = secMax;
                secMax = nums[i];
            }
            else if(nums[i] > thrdMax && nums[i] < secMax) {
                thrdMax = nums[i];
            }
        }
        if(thrdMax == LONG_MIN) {
            return max;
        }
        return thrdMax;
    }
};