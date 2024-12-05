#include<stdio.h>
#include<conio.h>
toh(char,char,char,int);
void main()
{
int n;
clrscr();
printf("\nEnter no of plates");
scanf("%d",&n);
toh('A','B','C',n);
getch();
}
toh(char s,char a,char d,int n)
{
if(n==1)
printf("\nMove %d from %c to %c",n,s,d);
else
{
toh(s,d,a,n-1);
printf("\nMove %d from %c to %c",n,s,d);
toh(a,s,d,n-1);
}
return;
}
