#include <iostream>
using namespace std;
int main()
{
	int i,n,rev,m,r;
	cin>>n;
	m=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	cout<<"reversed order of n "<<rev<<endl;
	if(m==rev)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
}
