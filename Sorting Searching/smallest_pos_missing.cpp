#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        bool ispresent[n + 1] = {false};
        for (int i = 0; i < n; i++) {
            
            if (arr[i] > 0 && arr[i] <= n)
                ispresent[arr[i]] = true;
        }
      
        for (int i = 1; i <= n; i++)
            if (!ispresent[i])
                return i;
      
        return n + 1;
    }
};

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends