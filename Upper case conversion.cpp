#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[30];
	int i;
	cin>>s;
	for(i=0;i<=10;i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	cout<<s;
	return 0;
}
