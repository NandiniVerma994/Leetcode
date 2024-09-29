class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) {
            return false;
        }
        int i = 0;
        while(i+1 < n && arr[i] < arr[i+1]) {
            i++;
        }
        //check if first element or last element is not the peak
        if(i == 0 || i == n-1) {
            return false;
        }

        while(i+1 < n && arr[i] > arr[i+1]) {
            i++;
        }

        //if we reached the end
        if(i == n-1) {
            return true;
        }
        return false;

    }
};