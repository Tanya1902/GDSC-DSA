#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	        
	    int start=0, end=n-1;
	    while(start<end){
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
	    }
	    
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	    
	    cout<<endl;
	}
	return 0;
}