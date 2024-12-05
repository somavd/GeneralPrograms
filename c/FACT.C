#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if(n==0||n==1)
return 1;
else
return n*fact(n-1);
}
void main()
{
int n;
printf("Enter number to find factorial\n");
scanf("%d",&n);
printf("Factorial of %d is %d\nPress any key to exit",n,fact(n));
getch();
}