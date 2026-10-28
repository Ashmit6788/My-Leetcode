class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> count(101,0);
        for(int num : nums){
            count[num]++;
        }
        int sum = 0;
        for(int v=1;v<=100;v++){
            if(count[v]==1) sum+=v;
        }
        return sum;
    }
};