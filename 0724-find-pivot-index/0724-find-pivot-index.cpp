class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }
        int leftSum = 0;
        int rightSum = sum;
        for(int i=0; i<n; i++) {
            rightSum = rightSum - nums[i];//17-6=11
            if(leftSum == rightSum) { 
                    return i;
                }
            leftSum += nums[i];
            
        }
        return -1;
    }
};