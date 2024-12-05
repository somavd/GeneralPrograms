#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
		if(i%2!=0)
		printf("  ");
		for(j=0;j<=i/2;j++)
		printf("*   ");
		printf("\n");
		}
		while(i){
		if(i%2!=0)
		printf("  ");
		for(j=0;j<i/2;j++)
		printf("*   ");
		printf("\n");
		i--;
		}
		
printf("Enter any key to exit....");
getch();
}