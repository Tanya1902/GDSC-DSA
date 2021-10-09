class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
        int f=0,l=nums.size()-1;
        int m,c=0;
        
        while(f<=l){
            m=(f+l)/2;
            if(nums[m]==target){
                for(int i=m;i>f;i--){
                    if(nums[i]<target){
                        ans.push_back(i+1);
                        break;
                    }
                }
                for(int i=m;i<l;i++)
                    if(nums[i]>target){
                        ans.push_back(i-1);
                        break;   
                    }
                
            else if(nums[m]<target)
                f=m;
            else 
                l=m;
        }
    
    
        }
        return ans;
    }
};