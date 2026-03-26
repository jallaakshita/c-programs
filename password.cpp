#include <iostream>
using namespace std;
int main()
{
	int pass;
	while(1)
	{
		cout<<"enter password"<<endl;
		cin>>pass;
		if(pass==1234)
		{
			break;
		}
	}
	cout<<pass<<"  is your password";
}
	

