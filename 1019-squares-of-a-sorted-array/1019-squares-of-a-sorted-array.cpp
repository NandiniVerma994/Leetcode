class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> squares;
        for(int i=0; i<n; i++) {
            squares.push_back(nums[i]*nums[i]);
        }
        sort(squares.begin(), squares.end());
        return squares;
    }
};