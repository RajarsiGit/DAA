#include<stdio.h>
#include<conio.h>
void main()
{
int f,l,m,i,s,element,li[100];
clrscr();
printf("enter the size of the list:") ;
scanf("%d",& s);
printf("enter %d integer values in ascending order /n",s);
for(i=0;i<s;i++)
scanf("%d",&li[i]);
printf("enter value to b searched:");
scanf("%d",&element);
f=0;
l=s-1;
m=(f+l)/2;
while(f<=l)
{
if(li[m]<element)
f=m+1;
else if(li[m]==element)
{
printf("element found in  %d position \n",m);
break; }
else
l=m-1;
m=(l+f)/2;
}
if(f>l)
printf("element not found in the list");
getch();
}
