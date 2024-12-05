
#include<stdio.h>
#include<conio.h>
void StringCat(char *a,char *b)
{
while(*a!='\0')
a++;

while(*b!='\0')
{
*a=*b;
a++;
b++;
}
*a='\0';
}

void String_Cat(char *a,char *b)
{
while(*a!='\0')
a++;

*a=' ';
a++;
while(*b!='\0')
{
*a=*b;
a++;
b++;
}
*a='\0';
}


void main()
{
char a[30],b[15];
printf("Enter String\n");
gets(a);
printf("Enter another string\n");
gets(b);
StringCat(a,b);
printf("you have entered.....\n%s",a);

printf("Enter String\n");
gets(a);
printf("Enter another string\n");
gets(b);
String_Cat(a,b);
printf("you have entered.....\n%s",a);


getch();
}ÿ