#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter Number");
scanf("%d",&n);
if(n<0)
printf("%d is negative Number");
else if(n>0)
printf("%d is Positive Number");
else
printf("You have Entered Zero");
printf("\nPress any key to Exit.....");
getch();
}