#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],c0=0,c1=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)c1++;
		}
		c0=n-c1;
		if(c1%2==0)
		{
			cout<<c0<<endl;
		}
		if(c1%2!=0)
		{
			cout<<c1<<endl;
		}
		return 0;
	}
}
