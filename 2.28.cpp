#include<iostream>
using namespace std;
main ()
{
	int num;
	cout<<"Enter five digit number";
	cin>>num;
	cout<<num/10000<<"   ";
	num=num%10000;
    cout<<num/1000<<"   ";
	num=num%1000;
	cout<<num/100<<"   ";
	num=num%100;
	cout<<num/10<<"   ";
	num=num%10;
	cout<<num/1<<"   ";
	num=num%1;
	
	return 0;
	
}
