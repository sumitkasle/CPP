#include<iostream>
using namespace std;

void fac(int x)
{
	cout<<"its factorial are"<<endl;
	for(int i=1;i<=x;i++)
	if(x%i==0)
	cout<<i<<endl;

}

int main()
{
	int x;
	cout<<"enter a number to check its factorial"<<endl;
	cin>>x;
	fac(x);
    return 0;
}
