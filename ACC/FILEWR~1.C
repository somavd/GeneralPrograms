#include<stdio.h>
#include<conio.h>
void main()
{
FILE *p;
char c;
clrscr();
p=fopen("a.txt","w");
printf("Enter data\n");
while((c=getchar())!='\n')
fputc(c,p);
fclose(p);
p=fopen("a.txt","r");
while((c=fgetc(p))!=EOF)
printf("%c",c);
fclose(p);
getch();
}