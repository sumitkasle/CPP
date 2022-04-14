#include<iostream>
using namespace std;


struct com
{
	
	char x,y;
	int z;
    
void get()
     {
     	cout<<"enter two numbers "<<endl;
     	cin>>x>>y;
       
     
     }
     
void add()
    {
    z=x+y;
    cout<<"your addition is:"<<z<<endl;
}

void sub()
    {
    z=x-y;
    cout<<"your subtraction is:"<<z<<endl;
}

void mul()
    {
    z=x*y;
    cout<<"your multiplication is:"<<z<<endl;
}
};


int main()
{
    com s[2];
    int i;
    for(i=0;i<2;i++)
    {
	
	s[i].get();
    s[i].add();
    s[i].sub();
    s[i].mul();
    
    }
	  return 0;
}

