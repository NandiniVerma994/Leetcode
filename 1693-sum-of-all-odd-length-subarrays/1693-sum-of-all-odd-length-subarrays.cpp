class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum += arr[j];
                if((j-i+1)%2 != 0) {//if the length of the subarray generated is not even
                    ans += sum;
                }
            }
        }
        return ans;
    }
};