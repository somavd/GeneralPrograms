#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter number");
scanf("%d",&n);
if(n%2==0)
printf("%d is Even Number");
else
printf("%d is Odd Number");
printf("\nPress any key to Exit.....");
getch();
}