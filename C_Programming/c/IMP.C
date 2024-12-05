# include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[10]={0};
char c;
while((c=getchar())!='\n'){
if(c>='0'||c<='9')
++a[c-'0'];
}
for(i=0;i<10;i++)
printf("%d",a[i]);
getch();
}