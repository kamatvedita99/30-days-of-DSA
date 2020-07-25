#include<iostream>
#include<bits/stdc++.h>
/* 1. Sorting the vector elements.
	2. Adjacent elements (since duplicate) will be equal. Print that element and break from loop.
	Time Complexity : O(nlogn) [time to sort a vector]
	Space Complexity: O(1)
	
	*/
	
using namespace std;
int main(){
	int n,m;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
	cin>>m;
	v.push_back(m);
	}
	
	sort(v.begin(),v.begin()+n);
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[i-1])
		{
			cout<<v[i];
			break;
		}
	}
}
