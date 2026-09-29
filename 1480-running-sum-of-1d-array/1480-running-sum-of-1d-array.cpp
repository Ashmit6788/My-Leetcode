class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum;
        int sums = 0;
        for(int  i =0;i<n;i++){
            sums+=nums[i];
            sum.push_back(sums);
        }
        return sum;
    }
};