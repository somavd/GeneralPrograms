#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
  int x1,y1,x2,y2,delta_x1,delta_y1,length;
  int i,gd=DETECT,gm=0,x_inc,y_inc,delta_x2,delta_y2;

  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

  printf("\nEnter X1 & Y1 co-ordinates:");
  scanf("%d%d",&x1,&y1);

  printf("\nEnter X2 & Y2 co-ordinates:");
  scanf("%d%d",&x2,&y2);

  x1=x1+320;
  y1=240-y1;

  x2=x2+320;
  y2=240-y2;

  delta_x1=(x2-x1);
  delta_y1=(y2-y1);

  delta_x2=abs(x2-x1);
  delta_y2=abs(y2-y1);

  if(delta_x2 > delta_y2)
   length=delta_x2;
  else
   length=delta_y2;

  x_inc=delta_x1/length;
  y_inc=delta_y1/length;

    putpixel(x1,y1,3);
    for(i=0;i<length;i++)
    {
       x1=x1+x_inc;
       y1=y1+y_inc;
       
       putpixel(x1,y1,3);       // Normal Line


    }
  getch();
  closegraph();

}