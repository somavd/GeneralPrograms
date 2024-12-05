/*

***********    ALL PAIR SHORTEST PATH    *****************

*/

#include<stdio.h>
#include<conio.h>
int min(int a,int b)
{
if(a<b)
return a;
else
return b;
}

void main()
{
int a[10][10],i,j,k,x;
printf("Enter number of nodes");
scanf("%d",&x);
printf("Enter Distances\n");
for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
			{
			printf("For (%d to %d)",(i+1),(j+1));
			scanf("%d",&a[i][j]);
			}
	}
for(k=0;k<x;k++)
	{
	for(i=0;i<x;i++)
		{
		for(j=0;j<x;j++)
			a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
		}
	for(i=0;i<x;i++)
	{
	for(j=0;j<x;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
	}
	printf("\n");
	}
getch();
}
