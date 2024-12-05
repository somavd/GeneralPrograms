#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
  float x1,y1,x,y,rad,p;
  int gd=DETECT,gm=0;
  initgraph(&gd,&gm,"C:\\turboc3\\bgi");

  printf("\nEnter X & Y Coordinates :");
  scanf("%f%f",&x,&y);

  printf("\nEnter the Radius :");
  scanf("%f",&rad);

  x=x+320;
  y=240-y;

  x1=0;
  y1=rad;

  p=3-(2*rad);

  while(x1<=y1)
  {
    putpixel(x+x1,y+y1,3);
    putpixel(x+x1,y-y1,3);
    putpixel(x-x1,y+y1,3);
    putpixel(x-x1,y-y1,3);
    putpixel(x+y1,y+x1,3);
    putpixel(x+y1,y-x1,3);
    putpixel(x-y1,y+x1,3);
    putpixel(x-y1,y-x1,3);

    if(p<0)
    {
     x1=x1+1;
     p=p+(4*x1)+6;
    }
    else
    {
      x1=x1+1;
      y1=y1-1;
      p=p+4*(x1-y1)+10;
    }
  }

  floodfill(x,y,3);
  getch();
  closegraph();
}