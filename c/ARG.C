#include<stdio.h>
#include<conio.h>
#include<stdarg.h>
int add(int n,...)
{
va_list lista;
int c,s=0;
va_start(lista,n);
for(c=0;c<n;c++)
s=s+stdarg(lista,int);
va_end(list);
return s;
}
void main()
{
printf("%d",add(3,1,2,3));
getch();
}