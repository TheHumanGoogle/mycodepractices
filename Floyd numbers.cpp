#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k;
	cin>>n;
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}
