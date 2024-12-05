

#include<stdio.h>
#include<conio.h>

int StringCmp(char *a,char *b)
{
int i=0;
while(*a==*b&&*a!='\0'&&*b!='\0'){
a++;
b++;
}
if(*a=='\0'&&*b=='\0')
return 0;
while(*b!='\0')
{
b++;
i--;
}
while(*a!='\0')
{
a++;
i++;
}
return i;
}

void main()
{
char a[20],b[20];
printf("Enter First string\n");
gets(a);
printf("Enter second String\n");
gets(b);
if(!StringCmp(a,b))
printf("Strings are equal\n");
else
printf("Strings are not equal\n" );
getch();
}
ÿ