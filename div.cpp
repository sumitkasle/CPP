#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number to check it is divisible by 11&7 "<<endl;
	cin>>a;
	if(a%11==0&&a%7==0)
	{
		cout<<"it is divisible by 11&7";
	}
	return 0;
}

