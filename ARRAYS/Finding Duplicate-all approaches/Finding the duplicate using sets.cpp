#include<bits/stdc++.h>
/*
using sets to check if the element to be entered is already present in the set.
Since sets do not alllow duplicates,as soon as the element is found in vector as well as set,
we declare it as duplicate.

TC: O(n)
SC:O(n) [set of max size n]
*/using namespace std;
int main(){
	int n,m;
	cin>>n;
	vector<int>v;
	set<int>s;
	for(int i=0;i<n;i++)
	{
	cin>>m;
	v.push_back(m);
	}
	for(int i=0;i<n;i++){
		
		if(s.find(v[i])!=s.end())
		{
			cout<<v[i];
			break;
		}
		s.insert(v[i]);
		
	}
}
