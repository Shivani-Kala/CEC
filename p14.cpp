#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(int j=i-1;j>0;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=n-i;j++)
		{
			cout<<j;
		}
		for(int j=n-i-1;j>0;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
