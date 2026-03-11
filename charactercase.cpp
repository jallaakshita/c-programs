#include <iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter character"<<endl;
	cin>>c;
	if(c>=48&&c<=57)
	{
		cout<<"Given character is Digit"<<endl;
	}
	else if(c>=65&&c<=90)
	{
		cout<<"Given character is capital letter"<<endl;
	}
	else if(c>=97&&c<=122)
	{
		cout<<"Given character is small letter"<<endl;
	}
	else
	{
		cout<<"given character is specail character"<<endl;
	}
}
