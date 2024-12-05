#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter number");   
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<(n-i);j++)


printf("  ");
for(j=0;j<2*i+1;j++)
{
if(i!=0)
printf("* ");
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
printf("  ");
for(j=0;j<2*(n-i)+1;j++)
{
if(i==0&&(j==n||j==0||j==2*n))
printf("  ");
else
printf("* ");
}
printf("\n");
}

getch();
}