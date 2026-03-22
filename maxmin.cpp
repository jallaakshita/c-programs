#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter 2 numbers";
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<" "<<"is bigger"<<endl<<b<<" "<<"is smaller";
	}
	else
	{
		cout<<b<<" "<<"is bigger"<<endl<<a<<" "<<"is smaller";
	}
}
