#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter size [odd]");
scanf("%d",&n);
for(i=0;i<n;i++){
		if(i==(n/2)){
		for(j=0;j<n;j++)
		printf("* ");
		}
		else
		{
		for(j=0;j<(n/2);j++)
		printf("  ");
		printf("* ");
		}
		printf("\n");
		}
printf("Enter any key to exit....");
getch();
}