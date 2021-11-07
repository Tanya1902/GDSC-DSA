//Search a 2D Matrix II
//https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int m = matrix.size(); //rows
    int n = matrix[0].size(); //cols
        
    int i=0,j=n-1;
    
    while(i<m && j>=0){
        if(matrix[i][j]==target)
            return true;
        else if(matrix[i][j]<target)
            i++;
        else
            j--;
    }
    return false;
    }
};