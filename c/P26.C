#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,n;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=i%2;
for(j=0;j<i;j++)
{
printf("%4d",(a%2));
a++;
}
printf("\n");
}
getch();
}
