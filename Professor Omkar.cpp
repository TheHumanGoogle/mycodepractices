#include<iostream>
using namespace std;

int main()
{
	int m,t1,t2;
	float q;
	cin>>m>>t1>>t2;
	q=m*(t2-t1)*4184;
	cout<<"The energy needed is: "<<q;
	return 0;
}
