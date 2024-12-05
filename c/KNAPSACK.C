/*

************     KNAPSACK PROBLEM    ************

*/

#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}

int sol1(int p[],int w[],int n,int m)
{
float s=0;
int i,j;
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		{
			if(p[i]<p[j])
				{
				swap(&p[i],&p[j]);
				swap(&w[i],&w[j]);
				}
		}
printf("Fraction\tcapacity\tProfit\n");
for(i=0;i<n;i++)
	{
		j=w[i]<m?w[i]:m;
		s+=p[i]*j/w[i];
		m-=j;
		printf("%f\t%d\t\t%f\n",(float)(j/w[i]),m,s);
		if(m==0)
			break;
	}
printf("By decreasing order of profit ----->>>>\t%f\n",s);
getch();
return s;
}
int sol2(int p[],int w[],int n,int m)
{
float s=0;
int i,j;
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		{
			if(w[i]>w[j])
				{
				swap(&p[i],&p[j]);
				swap(&w[i],&w[j]);
				}
		}
printf("Fraction\tcapacity\tProfit\n");
for(i=0;i<n;i++)
	{
		j=w[i]<m?w[i]:m;
		s+=p[i]*j/w[i];
		m-=j;
		printf("%f\t%d\t\t%f\n",(float)(j/w[i]),m,s);
		if(m==0)
			break;
	}
printf("By increasing order of weight ----->>>>\t%f\n",s);
getch();
return s;
}
int sol3(int p[],int w[],int n,int m)
{
int i,j;
float s=0,r[20],t;
for(i=0;i<n;i++)
r[i]=(float)(p[i]/w[i]);
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		{
			if(r[i]<r[j])
				{
				swap(&p[i],&p[j]);
				swap(&w[i],&w[j]);
				t=r[i];
				r[i]=r[j];
				r[j]=t;
				}
		}
printf("Fraction\tcapacity\tProfit\n");
for(i=0;i<n;i++)
	{
		j=w[i]<m?w[i]:m;
		s+=p[i]*j/w[i];
		m-=j;
		printf("%f\t%d\t\t%f\n",(float)(j/w[i]),m,s);
		if(m==0)
			break;
	}
printf("By decreasing order of ratio(profit:weight) ----->>>>\t%f\n",s);
getch();
return s;
}



void main()
{
int i,j,n,m,a[3],p[20],w[20];
clrscr();
printf("Enter number of weights or profits");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	printf("Enter %d profit",(i+1));
	scanf("%d",&p[i]);
	printf("Enter %d weight",(i+1));
	scanf("%d",&w[i]);
	}
printf("Enter capacity");
scanf("%d",&m);
a[0]=sol1(p,w,n,m);
a[1]=sol2(p,w,n,m);
a[2]=sol3(p,w,n,m);
printf("Optimal solution is ");
if(a[0]>a[1])
	printf("%d",a[0]>a[2]?a[0]:a[2]);
else
	printf("%d",a[1]>a[2]?a[1]:a[2]);
getch();
}


