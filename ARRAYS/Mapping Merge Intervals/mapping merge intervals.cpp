#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ct=0,e1,e2;
	cin>>n;
	vector<pair<int,int>>arr(n);
	for(int i=0;i<n;i++){
		
		cin>>e1;
		cin>>e2;
		arr.push_back(make_pair(e1,e2));
	}
	sort(arr.begin(),arr.end());
	int i=0;
	while(i<arr.size()-1){
		
		if(arr.size()==1){
			break;
		}
		else if(arr[i].second>=arr[i+1].first){
			ct++;
			
			arr[i+1].first=arr[i].first;
			cout<<arr[i+1].first<<" "<<arr[i+1].second<<" "<<ct<<endl;
			arr.erase(arr.begin()+i);
			cout<<"size is "<<arr.size()<<endl;
		}
		
		
		else{
			i++;
		}
	}
	cout<<"hello"<<arr.size();
	for(int i=0;i<arr.size();i++){
		cout<<arr[i].first<<" "<<arr[i].second<<endl;
	}
	
}
