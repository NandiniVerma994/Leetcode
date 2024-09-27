class Solution {
public:
    /*int solve(int n, vector<int> &dp) {
        if(n < 0) {
            return 0;
        }

        if(dp[n] != -1) {
            return dp[n];
        }
        if(n == 0) {
            return 1;// got 1 way
        }

        int one_step = solve(n-1, dp);
        int two_step = solve(n-2, dp);
        return dp[n] = one_step + two_step;
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }*/

    //BOTTOM UP
    int climbStairs(int n) {
        if(n == 1 || n == 2 || n == 3) {
            return n;
        }

        vector<int> arr(n+1);
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;

        for(int i=3; i<=n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};