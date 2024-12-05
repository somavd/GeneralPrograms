/*
..............String reverse using pointer..............
*/

#include"lib.c"

char *StringRev(char *a)
{
char b[20];
int i=0,j=0;

while(*a!='\0')
{
a++;
i++;
}

a--;

while(i-->=0)
{
b[j++]=*a;
a--;
}
b[j]='\0';

printf("%s",b);
return b;
}

void main()
{
char a[10];
clrscr();
printf("Enter String");
gets(a);
printf("reversed string is %s",*StringRev(a));
getch();
}
