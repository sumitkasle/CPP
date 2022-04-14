#include<iostream>
#include<string.h>
using namespace std;


class triangle 
{ 
 public:
    int a,b,c,d;

void area()
{
	a=3,b=4,c=5;
 d=(a*b)/2;
 cout<<"area of triangle is:"<<d<<endl;	
};
void per()
{
	a=3,b=4,c=5;
 d=a+b+c;
 cout<<"area of triangle is:"<<d<<endl;		
}
};

int main()
{    triangle t1;
     t1.area();
     t1.per();
	  return 0;
}

