#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],n,e=1,i,j;
clrscr();
printf("\nEnter size of matrix");
scanf("%d",&n);
if(n%2==0)
printf("\nMagic square can't be created");
else
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
a[i][j]=0;
}
while(e<=n*n)
{
 {
 if(e==1)
 {
 j=0;
 i=n/2;
 }
 else if(i<n&&j<0)
 j=n-1;
 else if(i==n&&j<0)
 {
 i--;
 j++;
 j++;
 }
 else if(i==n&&0<j<n)
 i=0;
 else if(a[i][j]!=0)
 {
 j++;
 j++;
 i--;
 }
 else if(a[i][j]==0)
 {
 i=i;
 j=j;
 }
 else;
 }
 a[i][j]=e;
 e++;
 i++;
 j--;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d",a[j][i]);
}
printf("\n");
}
}
getch();
}