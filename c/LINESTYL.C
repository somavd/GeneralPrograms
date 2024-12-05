#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT, gm,x=100,y=100,a,b,i;
initgraph(&gd,&gm,"..\\bgi");
settextstyle(0,HORIZ_DIR,1);
a=getmaxx(); b=getmaxy();
outtextxy(200,20,"different line styles");
rectangle(x-50,y-50,a-50,b-50);
for(i=0; i<=4; i++)
{
setlinestyle(i,0,2);
line(x,y,x+400,y);
y=y+50;
}
getch();
closegraph();
return 0;
}

