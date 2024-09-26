class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int elt;
        for(int i=0; i<nums.size(); i++) {
            if(cnt == 0) {
                cnt++;
                elt = nums[i];
            }
            else if(elt == nums[i]) {
                cnt++;
            } 
            else {
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i=0; i<nums.size(); i++) {
            if(elt == nums[i]) {
                cnt1++;
            }
        }

        if(cnt1 > n/2) {
            return elt;
        }
        return -1;
    }
};