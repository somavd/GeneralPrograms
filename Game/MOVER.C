#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int getkey(float *t)
{
union REGS i,o;
while(!kbhit())
*t+=0.01;
i.h.ah=0;
int86(22,&i,&o);
return o.h.ah;
}

void main()
{
int n,f,i,j,c,a[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5,0}},k,m=0,l;
 float t=0.0f;
 char ch;
 clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]!=0)
printf("%d\t",a[i][j]);
}
printf("\n");
}
i=j=3;
while(1)
{
m++;
ch=getkey(&t);
switch(ch)
{
case 77:
if(j!=3)
{
j++;
c=1;
}
break;
case 80:
if(i!=3)
{
i++;
c=2;
}
break;
case 75:
if(j!=0)
{
j--;
c=3;
}
break;
case 72:
if(i!=0)
{
i--;
c=4;
}
break;
case 18:
goto abc;
}
clrscr();
if(c==1)
a[i][j-1]=a[i][j];
if(c==2)
a[i-1][j]=a[i][j];
if(c==3)
a[i][j+1]=a[i][j];
if(c==4)
a[i+1][j]=a[i][j];
if(c==1||c==2||c==3||c==4)
a[i][j]=0;
if(a[0][0]==1&&a[0][1]==2&&a[0][2]==3&&a[0][3]==4&&a[1][0]==5&&a[1][1]==6&&a[1][2]==7&&a[1][3]==8&&a[2][0]==9&&a[2][1]==10&&a[2][2]==11&&a[2][3]==12&&a[3][0]==13&&a[3][1]==14&&a[3][2]==15)
f=1;
if(f==1)
goto abc;

for(k=0;k<4;k++)
{
for(n=0;n<4;n++)
{
if(a[k][n]!=0)
printf("%d\t",a[k][n]);
else
printf("\t");
}
printf("\n");
}
c=0;
}
abc:
printf("Your Time is %f seconds\nYour moves are %d",t,m);
 getch();
}