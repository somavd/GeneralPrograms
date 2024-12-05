#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<7;i++){
		for(a=0;a<6-i;a++)
		printf("  ");
		for(j=0;j<=i;j++)
		printf(" *");
		printf("\n");
		}
printf("Enter any key to exit....");
getch();
}