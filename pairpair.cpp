#include <iostream>
using namespace std;
int main()
{
	pair<pair<int,string>,pair<string,char> >p;
	p={{12,"akki"},{"csm",'b'}};
	cout<<p.first.first<<endl;
	cout<<p.first.second<<endl;
	cout<<p.second.first<<endl;
	cout<<p.second.second;
}
