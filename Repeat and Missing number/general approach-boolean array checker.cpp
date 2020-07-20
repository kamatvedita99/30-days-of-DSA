#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,element;
	cin>>n;
	vector<int>v;
	bool present[n]={false};
	for(int i=0;i<n;i++){
		cin>>element;
		v.push_back(element);
	}
	for(int i=0;i<n;i++){
		if(present[v[i]-1]==true)
		{
			cout<<"repeating element is "<<v[i]<<endl;
			
		}
		
		else{
			present[v[i]-1]=true;
			
		}
		
	}
	
	for(int i=0;i<n;i++){
		
		if(present[i]==false){
			cout<<"missing element is "<<i+1;
		}
	}
}
