//Toggle String
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string toggle(string s){
	for(int i=0;i<s.length();i++){
		if(isalnum(s[i])){
			if(isupper(s[i]))
			s[i]=tolower(s[i]);
			else
			s[i]=toupper(s[i]);
		}
	}
	return s;
}
int main() {
	string s;								
	cin>>s;		// Reading input from STDIN
	s=toggle(s);
	cout <<s<< endl;		// Writing output to STDOUT
}