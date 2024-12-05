# include<stdio.h>
#include<conio.h>
int mont=31,years,j,k,day;
int daycode;
char *month[]={" " ,
"January",
"February",
"March",
"April",
"May",
"June",
"July",
"August",
"September",
"October",
"November",
"December"
};
char *days[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int determinedaycode(int);
int main()
{
int year;
printf("Enter year (example 1999):");
scanf("%d",&year);
daycode=determinedaycode(year);
for(years=1;years<=12;years++){
printf("\n\n\t %s [ %d ]\n\n",month[years],year);
for(j=0;j<7;j++)
{
printf("%4s",days[j]);
}
if(years==2)
{
if(year%100==0&&year%400==0||year%4==0)
{
mont=29;
}
else
{
mont=28;
}
}
if(years==8)
{
mont=31;
}
printf("\n");
for(k=1;k<=35;k++)
{
printf("-");
}
printf("\n");
/* correct the position of the first date */
for(day=1;day<=1+(daycode*5);day++)
{
printf(" ");
}
/*print all dates for one month */ for
(day=1;day<=mont;day++)
{
printf("%2d",day);
/*is the day before sat? Else start next line sun
*/
if((day+daycode)%7>0)
{
printf(" ");
}
else
{
printf("\n");
}
}
/*set position for next month */ daycode=
(daycode+mont)%7;
if(mont==29||mont==28||mont==30)
{
mont=31;
}
else
{
mont=30;
}
printf("\n");
for(k=1;k<=35;k++)
{
printf("-");
}
}
printf("\n\nNote – According to the Gregorian	\ncalendar 01/01/1900 was Monday");
getch();
return 0;
}
int determinedaycode(int year)
{
int d1,d2,d3;
d1=(year-1)/4;
d2=(year-1)/100;
d3=(year-1)/400;
daycode=(year+d1-d2+d3)%7;
return (daycode);
}

