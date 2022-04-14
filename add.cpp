#include<iostream>
using namespace std;

void add(int x,int y)
{
	int a;
    a=x+y;
    cout<<"added no are"<<endl;
    cout<<a;
}

int main()
{
	int x,y;
	cout<<"enter a two number to to add";
	cin>>x>>y;
	add(x,y);
    return 0;
}
