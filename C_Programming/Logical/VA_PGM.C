#include"lib.c"
int sum(int a,...)
{
int s=0,i;
va_list n;
va_start(n,a);
for(i=0;i<a;i++){
s+=va_arg(n,int);
}
va_end(n);
return s;
}
void main()
{
printf("%d\n%d\n%d",sum(3,1,2,3),sum(4,1,2,3,4),sum(5,1,2,3,4,5));
getch();
}