#include<stdio.h>
#include<conio.h>
void main()
{
int c,i,j,n;
clrscr();
printf("Enter size");
scanf("%d",&n);
c=1;
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(j<=i)
		printf("%4d",c);
		c++;
		}
		printf("\n");
		}
		
printf("Enter any key to exit....");
getch();
}