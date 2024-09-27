class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
        for(int i=0; i<n; i++) {
            mpp[nums[i]]++; 
        }
        int k=1;
        for(int i=1; i<n; i++) {
            if(mpp[nums[i]] > 2) {
                mpp[nums[i]]--;
            }
            else {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};