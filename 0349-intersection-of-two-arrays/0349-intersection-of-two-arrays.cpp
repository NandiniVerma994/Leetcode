class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        vector<int> finalResult;
        int n = nums1.size();
        int m = nums2.size();
        map<int,int> mpp;
        map<int,int> mpp2;
        for(int i=0; i<n; i++) {
            mpp[nums1[i]] = 1;
        }

        for(int j=0; j<m; j++) {
            if(mpp.find(nums2[j]) != mpp.end()) {
                result.push_back(nums2[j]);
            }
        }
        for(int i=0; i<result.size(); i++) {
            mpp2[result[i]]++;
        }
        for(auto it: mpp2) {
            finalResult.push_back(it.first);
        }
        return finalResult;
    }
};