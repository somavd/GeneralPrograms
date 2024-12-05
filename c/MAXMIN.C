/*

************    MAXMIN    ************

*/

#include<stdio.h>
#include<conio.h>
int a[20],max,min=100,max1,min1=100;
void maxmin(int i,int j,int *b,int *c)
{
if(i==j)
*b=*c=a[i];
else if(i==(j-1))
{
if(a[i]>a[j])
{
*b=a[i];
*c=a[j];
}
else
{
*b=a[j];
*c=a[i];
}
}
else
{
maxmin(i,((i+j)/2),&max,&min);
maxmin(((i+j)/2+1),j,&max1,&min1);
if(max<max1)
max=max1;
if(min1<min)
min=min1;
}
}

void main()
{
int n,i;
clrscr();
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
maxmin(0,(n-1),&max,&min);
printf("Max=%d",max);
printf("\nMin=%d",min);
getch();
}

