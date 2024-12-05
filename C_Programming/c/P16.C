#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=n;j++)
printf("%4d",(n*i+j));
printf("\n");
}
printf("Enter any key to exit....");
getch();
}