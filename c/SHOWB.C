#include<stdio.h>
#include<conio.h>
void sb(int n)
{
int i;
for(i=31;i>=0;i--)
n&(1<<i)?printf("1 "):printf("0 ");

}
void main()
{
float a=3.5f;
clrscr();
sb(a);
printf("\n%f",a);
getch();
}