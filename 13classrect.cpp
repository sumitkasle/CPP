#include<iostream>
#include<string.h>
using namespace std;


class rectangle
{ 
 public:
    int a,b,c,d,e;

void area()
{
	a=4,b=5,c=8;
 d=a*b;
 e=b*c;
 cout<<"area of triangle one is:"<<d<<endl<<"area of reactangle two is:"<<e<<endl;	
}
};

int main()
{    rectangle r1;
     r1.area();
     
	  return 0;
}

