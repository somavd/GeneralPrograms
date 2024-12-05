#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Enter number of rows in one part");
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
printf("\n");
for(j=0;j<i;j++)
printf(" ");
for(j=0;j<(n-i);j++)
printf("* ");
}
for(i=0;i<=n;i++)
{
for(j=0;j<(n-i);j++)
printf(" ");
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
}
getch();
}