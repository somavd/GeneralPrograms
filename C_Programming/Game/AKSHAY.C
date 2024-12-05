
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
long x,y;
int i,j,key,gm,gd=DETECT;
long a=10,b=0,c,d;
initgraph(&gd,&gm,"..\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(4);
line(getmaxx()/2-40,0,getmaxx()/2-40,getmaxy());
line(getmaxx()/2+40,0,getmaxx()/2+40,getmaxy());
setcolor(2);
circle(getmaxx()/2,getmaxy()/2,2);
while(a)
{
switch(getch())
{
case 77:
setcolor(0);
circle(x,y,2);
setcolor(2);
circle(++x,y,2);
break;
case 72:
setcolor(0);
circle(x,y,2);
setcolor(2);
circle(x,--y,2);
break;
case 75:
setcolor(0);
circle(x,y,2);
setcolor(2);
circle(--x,y,2);
break;
case 80:
setcolor(0);
circle(x,y,2);
setcolor(2);
circle(x,++y,2);
break;
}
while(!kbhit()&&a)
{
if(getpixel(getmaxx()/2,b%500)==2)
a=0;
putpixel(getmaxx()/2,b%500,0);
putpixel(getmaxx()/2,b%500+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%600+10)==2)
a=0;
putpixel(getmaxx()/2-20,b%600+10,0);
putpixel(getmaxx()/2-20,b%600+11,getmaxcolor());
if(getpixel(getmaxx()/2,b%550+10)==2)
a=0;//exit(0);
putpixel(getmaxx()/2+20,b%550+10,0);
putpixel(getmaxx()/2+20,b%550+11,getmaxcolor());
if(getpixel(getmaxx()/2,b%525)==2)
a=0;//exit(0);
putpixel(getmaxx()/2+10,b%525,0);
putpixel(getmaxx()/2+10,b%525+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%550)==2)
a=0;//exit(0);
putpixel(getmaxx()/2-10,b%550,0);
putpixel(getmaxx()/2-10,b%550+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%575)==2)
a=0;//exit(0);
putpixel(getmaxx()/2-20,b%575,0);
putpixel(getmaxx()/2-20,b%575+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%625)==2)
a=0;//exit(0);
putpixel(getmaxx()/2+20,b%625,0);
putpixel(getmaxx()/2+20,b%625+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%650)==2)
a=0;//exit(0);
putpixel(getmaxx()/2-10,b%650,0);
putpixel(getmaxx()/2-10,b%650+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%675)==2)
a=0;//exit(0);
putpixel(getmaxx()/2+10,b%675,0);
putpixel(getmaxx()/2+10,b%675+1,getmaxcolor());
if(getpixel(getmaxx()/2,b%700)==2)
a=0;//exit(0);
putpixel(getmaxx()/2,b%700,0);
putpixel(getmaxx()/2,b%700+1,getmaxcolor());
b++;
for(i=0;i<getmaxy();i++)
{
if((getpixel(getmaxx()/2-40,i)==2)||getpixel(getmaxx()/2+40,i)==2)
a=0;
}
delay(10);
}
}
printf("Thanking you......%c%c%c\nPress any key to exit",0,0,0);
getch();
}