#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n>0)
	{
		cout<<"I am Waiting";
	}
	else if(n<0)
	{
		cout<<"I am not Waiting";
	}
	while(n==0)
	{
		cout<<"sorry"<<endl;
	}
	return 0;
}
