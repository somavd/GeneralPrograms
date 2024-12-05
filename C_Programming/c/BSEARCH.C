#include<stdio.h>
#include<conio.h>
int binsearch(int a[],int i,int j,int x)
{

int mid=(i+j)/2;
if(i==j)
	{
	if(x==a[i])
		return i;
	else
		return -1;
	}
else
	{
	if(x==a[mid])
		return mid;
	else if(x<=a[mid])
		return binsearch(a,i,mid-1,x);
	else
		return binsearch(a,mid+1,j,x);
	}

}
int main()
{

int i,n,a[25],x;
clrscr();
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to find");
	scanf("%d",&x);
	i=binsearch(a,0,n-1,x);
	if(i==-1)
		printf("Element not found");
	else
		printf("Element %d found at %d",x,(i+1));

getch();
return 0;
}

