#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,flag=0;
clrscr();
printf("Enter the no");
scanf("%d",&n);

if(n==0||n==1)
{
printf("no is not prime no");

}
else
{
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("the no is not prime no");
flag=1;
break;
}
}

if(flag==0)
{
printf("the no is prime");
}
}
getch();
}