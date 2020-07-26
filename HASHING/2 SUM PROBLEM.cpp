/*
                                   Approach 1: Hashing with position 
									
									TIME COMPLEXITY: O(n)
                                    SPACE COMPLEXITY: O(N)
                                                                                                                  
																												  
																												  */

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	unordered_set<int>s;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		
		cin>>a[i];
	}
	int sum,temp,flag=-1;
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		temp=sum-a[i];
		if(s.find(temp)!=s.end()){
			cout<<a[i]<<" "<<temp<<endl;
			flag=1;
			break;
		}
		s.insert(a[i]);
		
	}
	if(flag==-1){
		cout<<flag<<endl;
	}
}
