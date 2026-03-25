#include <iostream>
using namespace std;
class calc{
	public:
	int sum(int a,int b)
	{
		return a+b;
	}
	public:
	double sum(double a,double b)
	{
		return a+b;
	}
	public:
	int sum(int a)
	{
		int ans=0;
		while(a!=0)
		{
			ans+=a%10;
			a=a/10;
		}
		return ans;
	}
};

int main()
{
	calc c;
	cout<<c.sum(8.3,4.5)<<endl;
	cout<<c.sum(8,4)<<endl;
	cout<<c.sum(123);
}
