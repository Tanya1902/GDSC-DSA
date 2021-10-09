//Initial Template for C++

// C++ implementation to rearrange the array 
// elements after modification 
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
        void zerosToEnd(int arr[], int n) 
        { 
            int count = 0; 
            for (int i = 0; i < n; i++) 
                if (arr[i] != 0) {
                    arr[count] = arr[i]; 
                    count++;                    
                }
            while (count < n){
                arr[count] = 0; 
                count++;                
            } 
        }
        
        
        void modifyAndRearrangeArr(int arr[], int n) 
        { 
        	if (n == 1) 
                return; 
      
            for (int i = 0; i < n - 1; i++) { 
                if ((arr[i] != 0) && (arr[i] == arr[i + 1])) { 
                    arr[i] = 2 * arr[i]; 
                    arr[i + 1] = 0; 
                    i+=1; 
                } 
            } 
            zerosToEnd(arr, n);
        }
}; 


// { Driver Code Starts.
// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 
  // } Driver Code Ends