#include<iostream>
using namespace std;

void num(int x)
{
	if(x%2==0)
	cout<<"it is even number"<<endl;
	
	else
    cout<<"it is odd";

}

int main()
{
	int x;
	cout<<"enter a number to check it is even or odd";
	cin>>x;
	num(x);
    return 0;
}
