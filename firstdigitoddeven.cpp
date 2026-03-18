#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,p,q,r,s;
	cout<<"enter numbers"<<endl;
	cin>>a>>b>>c>>d;
	p=a/1000;
	q=b/1000;
	r=c/1000;
	s=d/1000;
	if(p%2==0)
	{
		cout<<a<<" is even number"<<endl;
	}
	else
	{
		cout<<a<<" is odd number"<<endl;
	}
	if(q%2==0)
	{
		cout<<b<<" is even number"<<endl;
	}
	else
	{
		cout<<b<<" is odd number"<<endl;
	}
	if(r%2==0)
	{
		cout<<c<<" is even number"<<endl;
	}
	else
	{
		cout<<c<<" is odd number"<<endl;
	}
	if(s%2==0)
	{
		cout<<d<<" is even number"<<endl;
	}
	else
	{
		cout<<d<<" is odd number"<<endl;
	}
}
