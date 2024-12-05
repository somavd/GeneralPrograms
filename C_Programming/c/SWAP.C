
#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)             
{
int temp=*a;
*a=*b;
*b=temp;
}

void main()
{
int a,b;
clrscr();
printf("Enter value of A");
scanf("%d",&a);
printf("Enter value of B");
scanf("%d",&b);
printf("\nA=%d\tB=%d\n",a,b);
printf("After Swapping......");
getch();
swap(&a,&b);
printf("\nA=%d\tB=%d",a,b);
getch();
}ÿ