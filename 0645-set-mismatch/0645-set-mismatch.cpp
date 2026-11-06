class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>count(n+1,0);
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        int dup = 0;
        int miss = 0;
        for(int v=0;v<=n;v++){
            if(count[v]==2) dup=v;
            else if(count[v]==0) miss=v;
        }
        return {dup,miss};
    }
};