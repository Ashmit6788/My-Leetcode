class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int hi=nums.size()-1;
        int lo= 0;
        int first=-1;
        int last=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                first=mid;
                hi=mid-1;
            }
            else if(nums[mid]>target){
                hi=mid-1;
            }
            else{ 
                lo=mid+1;
            }
        }
        hi=nums.size()-1;
        lo= 0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                last=mid;
                lo=mid+1;
            }
            else if(nums[mid]>target){
                hi=mid-1;
            }
            else{ 
                lo=mid+1;
            }
        }
        return{first,last};
    }

};