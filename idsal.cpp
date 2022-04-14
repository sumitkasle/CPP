#include<iostream>
using namespace std;
void details(int,int=10000);

int main()
{
	int sal,id;
	cout<<"enter your id and sal "<<endl;
	cin>>id>>sal;
	details(id,sal);
	cout<<"**********************************"<<endl<<"enter id";
	cin>>id;
	details(id);
	return 0;
}

void details(int id,int sal)
{
	cout<<"id:"<<id<<endl<<"sal:"<<sal<<endl;
}

