//find pivot index (leetcode solution class submitted)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        int sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum2*2 == (sum-nums[i]))
                return i;
            sum2+=nums[i];
        }
        return -1;
    }
};