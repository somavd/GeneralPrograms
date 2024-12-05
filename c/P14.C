#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a;
clrscr();
for(i=1;i<=10;i++){
		a=i;
		for(j=0;j<10;j++){
		printf("%4d",a);
		a=a+10;
		}
		printf("\n");
		}
printf("Enter any key to exit....");
getch();
}