class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int n = nums.size();
        int left = 0, right = n-1;
        sort(nums.begin(), nums.end());
        while(left < right) {
            int sum = nums[left] + nums[right];
            if(sum == target) return {left, right};
            else if(sum < target) left++;
            else right--;
        }
        return {};*/

        map<int,int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int num = nums[i];
            int  moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()) {//mpp.find(moreNeeded) gives the iterator pointing to the given number if found and if not found it points to mpp.end().
            //in this case agr mpp.find(moreNeeded) is not equal to mpp.end() mtlb anth tk nhi phoncha usse phle ruk gya mtlb mil gya iterator so hmlog return kr denge
            
                return {mpp[moreNeeded], i};//agr mil gya toh return kro dono ka indices
            }
            mpp[num] = i;// nhi toh assign kr do

        }
        return {-1, -1};

    }
};