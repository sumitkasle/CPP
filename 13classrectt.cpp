#include<iostream>
#include<string.h>
using namespace std;


class rectangle
{ 
 public:
    int a,b,c;

void info()
{
cout<<"enter sides of reactangle:"<<endl;
 cin>>a>>b;
}
void area()
{
 c=a*b;
 cout<<"area of triangle one is:"<<c<<endl;	
}
};

int main()
{    rectangle r1;
    r1.info();
    r1.area();
     
	  return 0;
}

