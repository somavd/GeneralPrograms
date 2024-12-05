#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,j,i='A';
clrscr();
printf("Enter range");
scanf("%d",&n);
j=n;
while(n){
a=0;
while((n--)>0)
printf("%c",i++,a++);
i--;
n++;
while(n<a)
printf("%c",i--,n++);
n--;
i++;
printf("\n");
}
for(a=0;a<j;a++){
while(n<=a)
printf("%c",i++,n++);
i--;
while(n--)
printf("%c",i--);
printf("\n");
i++;
n++;
}
getch();
}