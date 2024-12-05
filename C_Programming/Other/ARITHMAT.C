#include<stdio.h>
#include<conio.h>
void main()
{
int  a,b,c=1;
clrscr();
while(c)
{
printf("\n0.Exit\n1.Addition\n2.substraction\n3.Multiplication\n4.Division\n5.Modulus");
printf("\nEnter your choice");
scanf("%d",&c);
switch(c)
{
case 1: printf("Enter two numbers to add");
	scanf("%d%d",&a,&b);
	printf("Addition --> %d+%d=%d",a,b,(a+b));
	break;
case 2: printf("Enter two numbers to sub");
	scanf("%d%d",&a,&b);
	printf("Substraction --> %d-%d=%d",a,b,(a-b));
	break;
case 3: printf("Enter two numbers to multiply");
	scanf("%d%d",&a,&b);
	printf("Multiplication --> %d*%d=%d",a,b,(a*b));
	break;
case 4: printf("Enter two numbers to divide");
	scanf("%d%d",&a,&b);
	printf("Division --> %d/%d=%d",a,b,(a/b));
	break;
case 5: printf("Enter two numbers to Modulus");
	scanf("%d%d",&a,&b);
	printf("Addition --> %d%%%d=%d",a,b,(a%b));
	break;
}
}
printf("\nPress any key to Exit.....");
getch();
}