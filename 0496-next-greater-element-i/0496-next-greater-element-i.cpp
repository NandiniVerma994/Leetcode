class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> st;
        map<int, int> mpp;
        int m = nums1.size();
        vector<int> nge(m, -1);
        //for the rightmost element the next greater would be nothing so assign nge to -1  and push the element into the stack 
        //frm the next check if the top of the stack is greater than the iterated element if it is then assign nge to it and push the element into the stack
        //if its not greater then keep popping until u get a greater element if all elements gets popped and stack becomes empty then assign it to -1 and push the element and if it does not get empty then assign the greater element to nge so empty wala condition is written later
        //popping elements would not affect because we need next greater
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && st.top() < nums2[i]) {
                st.pop();
            }
            if(st.empty()) {
                mpp[nums2[i]] = -1;
            }
            else {
                mpp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0; i<m; i++) {
            nge[i] = mpp[nums1[i]];
        }
        return nge;
    }
};