class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int hi = n-1;
        int lo = 0;
        while(lo<hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]>nums[hi]){
                lo = mid+1;
            }
            else{
                hi =mid;
            }
        }
        return nums[lo];
    }
};