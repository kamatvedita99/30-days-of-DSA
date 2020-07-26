/*TIME COMPLEXITY: O(n^2)
SPACE COMPLEXITY: O(n^2)*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,X;
	unordered_map<int,pair<int,int>>mp;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
	}
	cin>>X;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			mp[arr[i]+arr[j]]={i,j};
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum=arr[i]+arr[j];
			if(mp.find(X-sum)!=mp.end()){
				
				pair<int,int>p=mp[X-sum];
				if(p.first!=i&&p.second!=j&&p.first!=j&&p.second!=i){
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[p.first]<<" "<<arr[p.second]<<endl;
					return;
				}
			}
		}
	}
}
