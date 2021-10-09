class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag1=1,flag2=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]) {
                flag1=0;
            }
            if(nums[i-1]<nums[i]){
                flag2=0;
            } 
        }
        return flag1 | flag2;
    }
};