#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void *ball;
void image();
void main()
{
int gd=DETECT,gm,l,i,k,temp;
initgraph(&gd,&gm,"..\\bgi");
setbkcolor(WHITE);
settextstyle(SANS_SERIF_FONT,0,5);
setcolor(RED);
outtextxy(250,200,"START");
getch();
image();
for(l=0;l<6;l++)
{
k=0;
temp=439;
for(i=k;i<temp;i++)
{
putimage(300,i-5,ball,XOR_PUT);
delay(1);
cleardevice();}
sound(1000);
delay(2);
nosound();
temp=0;
k=474;
for(i=k;i>0;i++)
{
putimage(300,5+i,ball,XOR_PUT);
delay(1);
cleardevice();}
sound(1000);
delay(2);
nosound(); }
outtextxy(250,200,"END");
getch();
closegraph();
}
void image()
{
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
fillellipse(10,10,10,10);
ball=malloc(imagesize(0,0,20,20));
getimage(0,0,20,20,ball);
cleardevice(); }

