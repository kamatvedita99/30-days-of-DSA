#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2,element;
	cin>>n1;
	cin>>n2;
	vector<int>v1,v2;
	for(int i=0;i<n1;i++){
		cin>>element;
		v1.push_back(element);
	}
	for(int i=0;i<n2;i++){
		cin>>element;
		v2.push_back(element);
	}
	int i;
	for(int j=0,i=n1-1;j<n2;j++,i--){
		if(v1[i]>v2[j]){
			int temp=v1[i];
			v1[i]=v2[j];
			v2[j]=temp;
			
		}
		else{
			break;
		}
	}
	
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(i=0;i<n1;i++){
		cout<<v1[i]<<" ";
	}
	
	for(i=0;i<n2;i++){
		cout<<v2[i]<<" ";
	}
	
}
