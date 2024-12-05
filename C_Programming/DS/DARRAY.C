#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *p,n,i;
printf("Enter number of elements");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("you have entered\n");
for(i=0;i<n;i++)
printf("%d\t",*(p+i));
getch();
}
