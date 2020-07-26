/* time complexity : O(n)
   space complexity: O(1)
   */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
//from name generate number
	int result=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		result = result*26;
		result+=s[i]-'A'+1;
	}
	cout<<result<<endl;

	
	}
	
	
