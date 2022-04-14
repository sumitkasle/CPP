#include<iostream>
using namespace std;

void swap(int x,int y)
{
	int a,b,c;
    a=y;
    b=x;
    c=a;
    a=b;
    cout<<"swapped no are"<<endl;
    cout<<c<<endl<<a;
}

int main()
{
	int x,y;
	cout<<"enter a two number to swap";
	cin>>x>>y;
	swap(x,y);
    return 0;
}
