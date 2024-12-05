#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"..\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=0;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		circle(x,y,i);
	}
getch();
	}