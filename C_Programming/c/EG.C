#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
struct date d,ds;
int a,b,c;
clrscr();
getdate(&d);
printf("%d/%d/%d",d.da_day,d.da_mon,d.da_year);
printf("Enter date,month,year");
scanf("%d%d%d",&a,&b,&c);
ds.da_day=a;
ds.da_mon=b;
ds.da_year=c;
setdate(&ds);
printf("%d/%d/%d",ds.da_day,ds.da_mon,ds.da_year);
getch();
}