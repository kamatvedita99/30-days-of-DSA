/*Time Complexity:O(n)
Space Complexity: O(n)*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j,ans=0;
	unordered_set<int>s;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		s.insert(arr[i]);
	}
	for(int i=0;i<n;i++){
		
		if(s.find(arr[i]-1)==s.end()){
			 j=arr[i];
			while(s.find(j)!=s.end())
			j++;
			
		
		ans=max(ans,j-arr[i]);
		cout<<"ans"<<" "<<ans<<endl;}
	}
	
cout<<ans;	
	
}
