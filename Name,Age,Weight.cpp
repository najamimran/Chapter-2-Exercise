#include<iostream>
#include<string>
using namespace std;
main()
{
	string firstName;
	string lastName;
	int age;
	double weight;
	cout<<"enter first name,last name,age,and weight,separated by spaces."<<endl;
	cin>>firstName>>lastName;
	cin>>age>>weight;
	cout<<"Name:"<<firstName<<" "<<lastName<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Weight:"<<weight<<endl;
	return 0;

}
