#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
   int x1,y1,x2,y2,delta_x,delta_y,i1;
  int gd=DETECT,gm=0,m,n,p;
  initgraph(&gd,&gm,"E:\\tc\\bgi");

  printf("\nEnter X1 & Y1 :");
  scanf("%d%d",&x1,&y1);

  printf("\nEnter X2 & Y2 :");
  scanf("%d%d",&x2,&y2);

  x1=x1+320;
  y1=240-y1;

  x2=x2+320;
  y2=240-y2;

  if(x1>x2)
   m=-1;
  else
   m=1;

  if(y1>y2)
   n=-1;
  else
   n=1;

   delta_x=abs(x2-x1);
   delta_y=abs(y2-y1);

   i1=1;
   putpixel(x1,y1,3);

   if(delta_x > delta_y)
   {
      p=2*delta_y-delta_x;

      while(i1<=delta_x)
      {
       if(p<0)
	p=p+2*delta_y;
       else
	{
	  p=p+2*delta_y-2*delta_x;
	  y1=y1+n;
	}
	i1++;
	x1=x1+m;
	if(i1%3==0)
	putpixel(x1,y1,3);
      }
   }
   else
   {
       p=2*delta_x-delta_y;

      while(i1<=delta_y)
      {
       if(p<0)
	p=p+2*delta_x;
       else
	{
	  p=p+2*delta_x-2*delta_y;
	  x1=x1+m;
	}
	i1++;
	y1=y1+n;
	if(i1%15!=0)
	putpixel(x1,y1,3);
      }
   }
   getch();
   closegraph();
}