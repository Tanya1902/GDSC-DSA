// C++ program to find leaders in an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        ans.push_back(a[n-1]);
        int rightMax =  a[n-1];
        for (int i = n-2; i >= 0; i--)
        {
            if (rightMax <= a[i]){
                rightMax = a[i];
                ans.push_back(rightMax);
            }
        }   
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
          cout << *it << " ";
        }
        
        cout << endl;

   }
}