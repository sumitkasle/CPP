#include<iostream>
#include<string.h>
using namespace std;


class complex
{ 
 
    int a,b;
    int c,d,e;
    
public:
	
void info()
{
 cout<<"enter two real number:"<<endl;
 cin>>a>>b;
 cout<<"enter two complex number:"<<endl;
 cin>>c>>d;
}
void ave()
{

 cout<<"average of two number is:"<<d<<endl;	
}
};

int main()
{    complex a1;
     a1.info();
     a1.ave();
     
	  return 0;
}

