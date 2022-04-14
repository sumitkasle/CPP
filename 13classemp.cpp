#include<iostream>
using namespace std;


class emp 
{  
    int rno,year;
    float sal;
	char name[20],no[10],add[30];
	public:	
	
void info()
{
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter year of joining:"<<endl;
	cin>>year;
	cout<<"enter salary:"<<endl;
	cin>>sal;
	cout<<"enter address:"<<endl;
	cin>>add;
	cout<<"enter mobile no:"<<endl;
	cin>>no;
}
void get()
{
	cout<<"name"<<name<<endl<<"year of joining"<<year<<endl<<"address"<<add<<endl<<"salary"<<sal<<endl;
}
};

int main()
{
     emp e1,e2;
     e1.info();
     e1.get();
     e2.info();
     e2.get();
	return 0;
}


