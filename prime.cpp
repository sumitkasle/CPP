#include<iostream>
using namespace std;

void prime(int x)
{
	int n=0;
	for(int i=2;i<x;i++)
 	{
	
	if(x%i==0)
	n++;
	
    }   
    if(n>0)
    {
    	cout<<"it is not prime";
	}
	else
	{
		cout<<"it is prime";
	}
}

int main()
{
	int x;
	cout<<"enter a value to check it is prime or not";
	cin>>x;
	prime(x);
    return 0;
}
