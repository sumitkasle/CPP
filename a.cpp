#include<iostream>
using namespace std;
int mul(int,int,int=1,int=1);

int main()
{	
    cout<<mul(20,30,40)<<endl;
     cout<<mul(10,10)<<endl;
      cout<<mul(20,30,30,20)<<endl;
}

int add(int x,int y,int z,int a)
{
	
    return x*y*z*a;
}
