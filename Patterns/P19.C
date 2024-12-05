#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
		for(a=0;a<n-i;a++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		}
		while(i){
		for(a=0;a<n-i;a++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		i--;
		}
		
printf("Enter any key to exit....");
getch();
}