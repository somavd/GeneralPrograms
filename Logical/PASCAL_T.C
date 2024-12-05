#include<stdio.h>
#include<conio.h>
long fact(int);
void main()
{
int l,i,j;
clrscr();
printf("Enter no. of lines");
scanf("%d",&l);
for(i=0;i<l;i++)
{
for(j=0;j<l-i-1;j++)
printf(" ");
for(j=0;j<i;j++)
printf("%ld",fact(i)/(fact(i)/fact(j)));
printf("\n");
}
getch();
}
long fact(int a)
{
/*if (a==0)
return 1;
else
return (a*fact(a-1));*/
long int f=1;
int i=1;
while(i<=a)
{
f=f*i;
i++;
}
return f;
}
