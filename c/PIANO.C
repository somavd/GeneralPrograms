#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,temp,temp1,i;
initgraph(&gd,&gm,"..\\bgi");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(90,40,"JUST ADD THE TONES");
outtextxy(240,100,"AND");
outtextxy(90,150,"CREATE NEW TONES");
setbkcolor(LIGHTBLUE);
setcolor(RED);
rectangle(20,200,620,400);
line(80,300,80,400);
rectangle(60,200,100,300);
line(140,300,140,400);
rectangle(120,200,160,300);
line(200,200,200,400);
line(260,300,260,400);
rectangle(240,200,280,300);
line(320,300,320,400);
rectangle(300,200,340,300);
line(380,300,380,400);
rectangle(360,200,400,300);
line(440,200,440,400);
line(500,300,500,400);
rectangle(480,200,520,300);
line(560,300,560,400);
rectangle(540,200,580,300);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(70,210, RED);
floodfill(130,210,RED);
floodfill(250,210,RED);
floodfill(310,210,RED);
floodfill(370,210,RED);
floodfill(490,210,RED);
floodfill(550,210,RED);
setfillstyle(SOLID_FILL,WHITE);
floodfill(60,310, RED);
floodfill(120,310,RED);
floodfill(180,310,RED);
floodfill(240,310,RED);
floodfill(300,310,RED);
floodfill(360,310,RED);
floodfill(420,310,RED);
floodfill(480,310,RED);
floodfill(540,310,RED);
floodfill(600,310,RED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
setcolor(LIGHTRED);
outtextxy(45,350,"1");
outtextxy(100,350,"2");
outtextxy(163,350,"3");
outtextxy(220,350,"4");
outtextxy(280,350,"5");
outtextxy(340,350,"6");
outtextxy(400,350,"7");
outtextxy(460,350,"8");
outtextxy(520,350,"9");
outtextxy(580,350,"0");
temp1 :
temp=getch();
switch(temp)
{
case 48:
for(i=1200;i<1500;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 49:
for(i=100;i<400;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 50:
for(i=300;i<700;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 51:
for(i=500;i<900;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 52:
for(i=700;i<1100;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 53:
for(i=900;i<1300;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 54:
for(i=450;i<750;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 55:
for(i=650;i<950;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 56:
for(i=750;i<1050;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
case 57:
for(i=850;i<1150;i=i+50)
{
sound(i);
delay(100);
}
nosound();
goto temp1;
default :
exit(1);
}
}


