#include<iostream>
#include<string.h>
using namespace std;


class student 
{  public:
    int rno;
	char name[20];	
   
   
};

int main()
{
    student s1;
     s1.rno=2;
    strcpy(s1.name,"john");
    cout<<s1.rno<<endl<<s1.name;
	  return 0;
}

