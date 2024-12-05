#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=(n-(i+1));j++)
printf(" ");
for(j=0;j<i;j++)
{
printf("* ");
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
printf(" ");
for(j=0;j<(n-i);j++)
{
if(i==0&&(j==n/2))
printf("  ");
else
printf("* ");
}
printf("\n");
}
getch();
}