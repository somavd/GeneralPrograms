#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,c=1,a[10][10];
clrscr();
printf("Enter Number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i%2==0)
a[i/2][j]=c++;
else
a[n-i/2-1][j]=c++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(j!=n-1)
printf("%d * ",a[i][j]);
else
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}