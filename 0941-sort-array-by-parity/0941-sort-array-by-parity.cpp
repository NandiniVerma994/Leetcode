class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,0);//n=4
        int j=0;
        int k=n-1;
        for(int i=0; i<n; i++) {
            if(nums[i] % 2 == 0) {
                result[j++] = nums[i];
            }
            else {
                result[k--] = nums[i];
            }
        }
        return result;
    }
};