class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        /*vector<int> result;
        int n = nums.size();
        for(int i=1; i<=n; i++) {//i=1
            int flag = 0;
            for(int j=0; j<n; j++) {
                if(nums[j] == i) {
                    flag = 1;
                    break;
                }
                else {
                    continue;
                }
            }
            if(flag == 0) {
                result.push_back(i);
            }
        }
        return result;*/
        vector<int> result;
        map<int,int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            mpp[nums[i]]++;
        }
        for(int i=1; i<=nums.size(); i++) {
            if(mpp[i] == 0) result.push_back(i);
        }
        return result;
    }
};