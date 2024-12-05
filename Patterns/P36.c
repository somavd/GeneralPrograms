#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("Enter number of rows For any section");
scanf("%d",&n);
for(i=0;i<(n*2+1);i++)
{
if(i!=n)
for(j=0;j<(n*2+1);j++)
{
if(j!=n)
printf("* ");
else
printf("| ");
}
else
for(j=0;j<(2*n+1);j++)
{
if(j!=n)
printf("- ");
else
printf("+ ");
}
printf("\n");
}

getch();
}
