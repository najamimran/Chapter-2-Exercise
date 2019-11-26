#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	a=5;
	b=++a;
	cout<<b<<"B"<<endl;
	c=++a + ++b;
	cout<<a<<"A"<<endl;
	cout<<b<<"B"<<endl;
	cout<<c<<"C"<<endl;
	return 0;
}
