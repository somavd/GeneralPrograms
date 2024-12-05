
#include<stdio.h>
#include<conio.h>
void main()
{
int *p,i,j;
int *q=&j;


clrscr();
p=&i;



printf("\nEnter any two numbers");
scanf("%d%d",p,q);
printf("%d=%d\n%d=%d",i,*p,j,*q);
printf("\nEnter any key to exit");
getch();
}ÿ