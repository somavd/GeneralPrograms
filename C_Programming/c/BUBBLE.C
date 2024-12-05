#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,t;
clrscr();
printf("Enter no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("Sorted Elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}

