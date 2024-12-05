#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<(n/2+1);i++){
		for(j=0;j<i;j++)
		printf("  ");
		printf("* ");
		for(j=0;j<(n-2*i);j++)
		printf("  ");
		printf("* ");
		printf("\n");
		}
		for(i=(n/2+1);i>=0;i--){
                for(j=0;j<i;j++)
                printf("  ");
                printf("* ");
		for(j=0;j<(n-2*i);j++)
                printf("  ");
                if(i!=(n/2+1))
		printf("* ");
                printf("\n");
                }
printf("Enter any key to exit....");
getch();
}