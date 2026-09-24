class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actsum = n*(n+1)/2;
        int miss =0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum!=actsum){
            miss = actsum-sum;
        }
        return miss;
    }
};