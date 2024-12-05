#include"lib.c"
int avg(int n,...)
{
int s=0,i;
va_list  l;
va_start(l,n);
for(i=0;i<n;i++)
s+=va_arg(l,int);
va_end(l);
return outs/n;
}
void main()
{
int n,i,a[10]={0};
clrscr();
printf("Enter no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Average=%d",avg(n,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]));
getch();
}
