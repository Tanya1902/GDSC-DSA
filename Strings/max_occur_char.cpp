//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1 { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int> mp;
        for(int i=0;i<str.length();i++)
        mp[str[i]]++;
        
        int val=0;
        char ele;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>val){
                val=i->second;
                ele=i->first;
            }
        }
        return ele;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends