//Count number of words
//https://practice.geeksforgeeks.org/problems/count-number-of-words1500/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    int res=0,j=0;
    while(s[j]==' ' || s[j]=='\\' && (s[j+1]=='t' || s[j+1]=='n')){
        j++;
    }
    for(int i=j;i<s.length();i++){
        if(s[i]==' ' && isalnum(s[i+1]))
        res++;
        else if (s[i]=='\\' && (s[i+1]=='t' || s[i+1]=='n') && isalnum(s[i+2]) ){
            i++;
            res++;
        }       
        
    }
    
    if(!s.empty())
        res++;
        
    return res;
}