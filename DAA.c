#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],x,i,n,low,high,mid;
clrscr();

printf("enter the size of array\n");
scanf("%d",&n);

printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter the element which is to be searched\n");
scanf("%d",&x);
low=0;
high=n-1;
mid=(low+high)/2;

while(low<=high)
if(a[mid]<x)
low=mid+1;
else
if(a[mid]==x)
{
printf("element is found at index %d",mid);
break;
}
else(high=mid-1);
mid=(low+high)/2;
if(low>high)
{
printf("element is not found");
}

getch();
}

