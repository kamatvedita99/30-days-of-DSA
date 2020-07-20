
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void swap(vector<int> &v,int index1,int index2)
{
	int temp = v[index1];
	v[index1] = v[index2];
	v[index2] = temp;
}
int main()
{
	int n,low=0,mid=0,high,m;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		v.push_back(m);
	}
	high=n-1;
	while(mid<=high)
	{
		if(v[mid]==0)
		{
		 swap(v,low,mid);
		 low++;
		 mid++;
		}
		else if(v[mid]==1)
		mid++;
		else if(v[mid]==2){
			swap(v,mid,high);
			high--;
		}
		
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}
