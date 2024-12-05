/*

************    SINGLE PAIR SHORTEST PATH    ************
.......................DJKSHTRA..........................

*/

#include<stdio.h>
#include<conio.h>
int min(int a[],int f[],int n)
{
int s,i,j;
for(i=0;i<n;i++)
	if(f[i]==0)
	{
		s=i;
		break;
	}
while(i<n)
	{
	if(a[i]<a[s]&&f[i]==0)
	s=i;
	i++;
	}
return s;
}


void main()
{
int *ptr,x,s,d,i,j,n,a[20],c[20][20],f[20]={0},p[20];
clrscr();
printf("Enter number of nodes");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
for(i=0;i<n;i++)
	{
		printf("Enter number of infinity paths from %d",(i+1));
		scanf("%d",&x);
		for(j=0;j<x;j++)
			{
			scanf("%d",&s);
			c[i][(s-1)]=100;
			}
	}

for(i=0;i<n;i++)
c[i][i]=0;
printf("Enter Costs\n");
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		{
		if(c[i][j]!=0&&c[i][j]!=100)
			{
			printf("For (%d to %d)",(i+1),(j+1));
			scanf("%d",&c[i][j]);
			}
		}
for(i=0;i<n;i++)
p[i]=n;
printf("Enter source");
scanf("%d",&s);
s--;
printf("Enter destination");
scanf("%d",&d);
d--;
for(i=0;i<n;i++)
a[i]=c[s][i];
i=0;
while(f[d]!=1&&i<n)
{
x=min(a,f,n);
f[x]=1;
p[x]=i;
i++;
for(j=0;j<n;j++)
	{
	if(f[j]==0)
		{
			if(a[j]<(a[x]+c[x][j]))
			       {
					if(j==d&&a[j]<100)
					{
					p[x]=-1;
					i--;
					}
			       }
			 else
			 a[j]=a[x]+c[x][j];
		}
	}
printf("%c\t",('A'+x));
for(j=0;j<n;j++)
printf("%d\t",a[j]);
printf("\n");
}
printf("Shortest path is\n");
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		if(p[j]==i)
		{
			printf("%d-->>",(j+1));
			break;
		}

printf("\nCost is %d",a[d]);
getch();
}