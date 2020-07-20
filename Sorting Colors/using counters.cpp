#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count0=0,count1=0,count2=0,m;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>m;
		v.push_back(m);
		if(v[i]==0)
		count0++;
		else if(v[i]==1)
		count1++;
		else
		count2++;
	}
	v.clear();
	v.insert(v.end(),count0,0);
	v.insert(v.end(),count1,1);
	v.insert(v.end(),count2,2);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}
