
#include<stdio.h>
#include<conio.h>

void StringCopy(char *d,char *s)
{
while(*s!='\0')
{
*d=*s;
d++;
s++;
}
}

void main()
{
char a[20],b[20];
printf("\nEnter String");
gets(a);
StringCopy(b,a);
printf("%s",b);
getch();
}
ÿ