/* Time Complexity of O(log n)

Solved Using Recursion
*/
#include<iostream>
using namespace std;
int a,b;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	
	return gcd(b,a%b);
	
}


int main(){
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	cout<<gcd(9,15)<<endl;
	
}


