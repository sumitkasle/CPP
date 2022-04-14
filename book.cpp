#include<iostream>
using namespace std;


struct book 
{
	int p,n;
	char name[20];	
};


int main()
{
    book s[5];
    int i;
    
    for(i=0;i<5;i++)
    {
    cout<<"enter book id,book price,book name"<<endl;
	cin>>s[i].n>>s[i].p>>s[i].name;	
	}
	
	for(i=0;i<5;i++)
    {
	cout<<"book id:"<<s[i].n<<"\t"<<"name:"<<s[i].name<<"\t"<<"book price:"<<s[i].n<<endl; 
    } 
	 return 0;
}

