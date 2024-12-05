#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=i+1;
for(j=0;j<n-i;j++)
printf("  ");
for(j=0;j<i+1;j++)
printf("%d ",a++);
a--;
for(j=0;j<i;j++)
printf("%d ",--a);
printf("\n");
}
getch();
}