#include<iostream>
#include<string.h>
using namespace std;


class average
{ 
 public:
    int a,b,c;

void info()
{
 cout<<"enter two number to make average:"<<endl;
 cin>>a>>b;
}
void ave()
{
 c=(a*b)/2;
 cout<<"average of two number is:"<<c<<endl;	
}
};

int main()
{    average a1;
     a1.info();
     a1.ave();
     
	  return 0;
}

