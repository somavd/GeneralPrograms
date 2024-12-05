#include<stdio.h>
#include<conio.h>
int b[20],n;

void merge(int a[],int i,int mid,int j)
{
int x,flow,slow,tlow;
	flow=i;
	tlow=i;
	slow=mid+1;
	while(flow<=mid&&slow<=j)
	{
	if(a[flow]<a[slow])
		{
		b[tlow]=a[flow];
		flow++;
		}
	else
		{
		b[tlow]=a[slow];
		slow++;
		}
	tlow++;
	}
	if(flow>mid)
		{
		while(slow<=j)
			{
			b[tlow]=a[slow];
			tlow++;
			slow++;
			}
		}
	else
		{
		while(flow<=mid)
			{
			b[tlow]=a[flow];
			tlow++;
			flow++;
			}
		}
	while(i<=j)
		{
		a[i]=b[i];
		i++;
		}
}

void merges(int a[],int i,int j)
{
if(i!=j)
	{
	merges(a,i,(i+j)/2);
	merges(a,(i+j)/2+1,j);
	}
merge(a,i,(i+j)/2,j);
}


int main()
{
int i,a[20];
clrscr();
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	merges(a,0,n-1);
	printf("Sorted elements are \n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
getch();
return 0;
}


