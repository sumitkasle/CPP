#include<iostream>
#include<string.h>
using namespace std;


class student 
{  public:
    int rno;
	char name[20],no[10],add[30];	
};

int main()
{
    student s1,s2;
     s1.rno=1;
    strcpy(s1.name,"john");
    strcpy(s1.add,"pune");
    strcpy(s1.no,"1234567890");
    cout<<s1.rno<<endl<<s1.name<<endl<<s1.add<<endl<<s1.no<<endl;
    
     s2.rno=2;
    strcpy(s2.name,"sam");
    strcpy(s2.add,"LATUR");
    strcpy(s2.no,"0987654321");
    cout<<s2.rno<<endl<<s2.name<<endl<<s2.add<<endl<<s2.no;
	  return 0;
}

