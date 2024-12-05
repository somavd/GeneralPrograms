#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a,b;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
		for(a=0;a<(n-i);a++)
		printf("  ");
		for(b=i;b>0;b--)
		printf("%d ",b);
		for(j=2;j<=i;j++)
		printf("%d ",j);
		printf("\n");
		}
printf("Enter any key to exit....");
getch();
}