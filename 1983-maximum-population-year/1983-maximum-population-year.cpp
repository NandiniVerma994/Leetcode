class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        /*//taking an array with all values assigned to 0
        int arr[101] = {0};//2050-1950+1
        //for each birth year increment its value and for death year decrement at the index 
        for(auto it: logs) {
            arr[it[0]-1950]++;
            arr[it[1]-1950]--;
        }
        int max = arr[0];
        int maxyear = 1950;
        for(int i=1; i<101; i++) {
            arr[i] += arr[i-1];//adding the population count//cumulatively adding
            if(arr[i] > max) {
                max = arr[i];
                maxyear = i+1950;
            }
        }
        return maxyear;*/

        int arr[101] = {0};
        for(auto it: logs) {
            arr[it[0]-1950]++;
            arr[it[1]-1950]--;
        }

        int max = arr[0];
        int maxYr = 1950;
        for(int i=1; i<101; i++) {
            arr[i] += arr[i-1];
            if(arr[i] > max) {
                max = arr[i];
                maxYr = i+1950;
            }
        }
        return maxYr;
    }
};