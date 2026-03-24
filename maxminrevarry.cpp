#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int max=INT_MIN,min=INT_MAX,maxidx,minidx;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			maxidx=i;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			minidx=i;
		}
	}
	arr[maxidx]=min;
	arr[minidx]=max;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
