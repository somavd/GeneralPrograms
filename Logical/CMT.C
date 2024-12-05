#include<stdio.h>
#include<conio.h>
void main()
{
FILE *p,*q;
char c,n[20];
int f=0;
clrscr();
printf("Enter file to remove comments");
gets(n);
p=fopen(n,"r");
q=fopen("abcdefg.c","w");
if(p==NULL)
printf("file not found");
else{
while(1)
{
c=fgetc(p);
if(feof(p))
break;
if(c=='/'&&(f==0||f==1))
f++;
else if(c=='*')
{
if(f==1)
f=3;
if(f==3)
f=4;
if(f==0)
{
fprintf(q,"*");
printf("*");
}
}
else if(c=='/'&&f==4)
f=0;
else if(f==2&&c=='\n')
{
printf("\n");
fprintf(q,"\n");
f=0;
}
else if(f==0)
{
fprintf(q,"%c",c);
printf("%c",c);
}
}
}
fcloseall();
remove(n);
rename("ABCDEFG.c",n);
getch();
}