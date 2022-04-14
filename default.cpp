#include<iostream>
using namespace std;
int add(int,int,int=0,int=0);

int main()
{	
    cout<<add(20,30,40)<<endl;
     cout<<add(10,10)<<endl;
      cout<<add(20,30,30,20)<<endl;
}

int add(int x,int y,int z,int a)
{
	
    return x+y+z+a;
}
