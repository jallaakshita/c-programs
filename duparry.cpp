#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int duparr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		duparr[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<duparr[i]<<endl;
	}
}
