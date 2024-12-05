
#include<stdio.h>
#include<conio.h>
void main()
{
int *p,n,i;
p=(int*)malloc(sizeof(*p));
*p=10;
printf("Value of p= %d\nAddress of p = %p\n",*p,p);
free(p);
printf("Enter size of array\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(*p));
printf("Enter %d elements\n",n);
for(i=0;i<n;i++,p++)
scanf("%d",p);
for(i=0;i<n;i++,p--);
for(i=0;i<n;i++,p++)
printf("%d At %p\n",*p,p);
getch();
}
ÿ