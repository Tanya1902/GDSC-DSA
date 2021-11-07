class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int i=0;
        bool ans;
        while(target>matrix[i][n-1])
           i++;
        
        if(i==m)
            return false;
        else{
             int l=0,r=n,mid;
                while(l<=r){
                    mid=(l+r)/2;

                    if(matrix[i][mid]==target)
                        return true;

                    else if(target>matrix[i][mid])
                        l=mid;
                    else
                        r=mid;
                }
                return false;
        }    
        
    }
};