#include<stdio.h>
#include<conio.h>
void main()
{
int n,x,y,d=0,i=0;
clrscr();
printf("Enter number of steps to reach");
scanf("%d",&n);
printf("Enter number of steps to climb up each day");
scanf("%d",&x);
printf("Enter number of steps to climb down each day");
scanf("%d",&y);
while(1){
d=d+x;
i++;
if(d>=n)
break;
d-=y;
}
 printf("Number of days to climb %d steps is %d",n,i);
 getch();
}