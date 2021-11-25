//Power of 2
//https://leetcode.com/problems/power-of-two/submissions/
class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        if(!n)
            return false;
        while(n!=0)
        {
            if(n==1)
            return true;
            
            if(n%2==0)
                n=n/2;
            else
                return false;
         }
        return true;
    }
};