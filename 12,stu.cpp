#include<iostream>
using namespace std;


struct student 
{
    int rno;
	float p,phy,che,math,bio,com;
	char name[20];	
    
void info()
     {
     	cout<<"enter your rno,name"<<endl;
     	cin>>rno>>name;
       
	    cout<<"enter your subject marks physics,chemistry,math,biology &computer"<<endl;
     	cin>>phy>>che>>math>>bio>>com;
     
     }
     
void per()
    {
    p=(phy+che+math+bio+com)/5;
    cout<<"your percentage is:"<<p;
}
};


int main()
{
    student s[5];
    int i;
    cout<<"welcome to our COLLAGE WEBSITE"<<endl; 
    for(i=0;i<5;i++)
    {
	
	s[i].info();
    s[i].per();
    
    }
	  return 0;
}

