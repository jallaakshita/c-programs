#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 3 numbers";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<"maximum is "<<a<<endl;
	}
	else if(b>a&&b>c)
	{
		cout<<"maximum is "<<b<<endl;
	}
	else
	{
		cout<<"maximum is "<<c<<endl;
	}
	if(a<b&&a<c)
	{
		cout<<"minimum is "<<a<<endl;
	}
	else if(b<a&&b<c)
	{
		cout<<"minimum is "<<b<<endl;
	}
	else
	{
		cout<<"minimum is "<<c<<endl;
	}
}
