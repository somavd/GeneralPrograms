#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include <graphics.h>
#include<math.h>

#define MAX 100
#define left 150
#define top 50
#define right 300
#define bottom 400

union REGS i,o;

void Init()
{
	i.x.ax=0;
	int86(0x33,&i,&o);
}
void Show()
{
	i.x.ax=1;
	int86(0x33,&i,&o);
}
void Hide()
{
	i.x.ax=2;
	int86(0x33,&i,&o);
}
void GPosition(int *x,int *y,int *Button)
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	*Button=o.x.bx;
	*x=o.x.cx;
	*y=o.x.dx;
}

int DrawP( int x1[],int y1[],int x2[] ,int y2[] )
{
 int i=0,c=0,xc,yc,Button;
 do
 {
	delay(150);
	GPosition( &xc, &yc, &Button );
	if ( Button == 1 )
	{
		printf("%d",Button);

		if( ( i % 2 ) == 0 )
		{
		x1[c] = xc ;
		y1[c] = yc ;
		}
		else
		{
		x2[c] = xc ;
		y2[c] = yc ;
		Hide();
		line( x1[c], y1[c], x2[c], y2[c] );
		Show();
		c++;
		}
		i++;
	}
 }while( Button != 2 );

// printf("%d",c);
 return c;
}

void LineClipping(int x1[],int y1[],int x2[],int y2[],int iter)
{
	int t1,t2,l,i=0,code1=0,code2=0;
 float  slope[MAX],opx2[MAX],opy2[MAX],opx1[MAX],opy1[MAX];

 for(i=0;i<iter;i++)
 {
//   printf("%d %d %d %d",y2[i],y1[i],x2[i],x1[i]);
	 slope[i]=((float)(y2[i]-y1[i]))/((float)(x2[i]-x1[i]));
	 if(slope[i]==0.)
	printf("Divide by 0 at %d line",i);
	 else
	 {
//	printf("ok\n");
	 code1=code2=0;
	 setcolor(0);
	 line(x1[i],y1[i],x2[i],y2[i]);

   for (l=0;l<2;l++)
   {
	if((x1[i]==right)||(x1[i]==left)||(y1[i]==top)||(y1[i]==bottom))
	{
		code1=0;
	}
   //	else
	{
		if((y1[i]<top)||(y1[i]>bottom))
		{
			if(y1[i]<top)
				code1=8;
			else
				code1=4;
		}
     //		else
		{
			if((x1[i]>right)||(x1[i]<left))
			{
				if(x1[i]>right)
					code1=2;
				if(x1[i]<left)
					code1=1;
			}

		}
	}
	printf("%d",code1);
	if ( l == 0 )
	{
		code2 = code1;
		code1=0;
		t1=x1[i];
		t2=y1[i];
		x1[i]=x2[i];
		y1[i]=y2[i];

	}
   }

   if(!(code1 & code2) == 0)
	continue;
   for ( l=0; l< 2 ; l++ )
    {
 //
		if(code1==0)
		{
			if ( l ==1 )
			{
				opx1[i]=t1;
				opy1[i]=t2;
			}
			else
			{
				opx1[i]=x1[i];
				opy1[i]=y1[i];
			}
			printf("%d",x1[i]);
//			printf("Hi");
		 }
		else
		{
			if(code1==8)
			{
				opy1[i]=top;
				opx1[i]=(float)x1[i]-((float)(y1[i]-top)/slope[i]);
	//			printf("Hi1");
			}
			if(code1==4)
			{
				opy1[i]=bottom;
				opx1[i]=(float)x1[i]-((float)(y1[i]-bottom)/slope[i]);
			}
			if(code1==2)
			{
			opx1[i]=right;
			opy1[i]=(slope[i]*(float)(right-x1[i]))+(float)y1[i];

			}
			if(code1==1)
			{
				opx1[i]=left;
				opy1[i]=(slope[i]*(float)(left-x1[i]))+(float)y1[i];
			}
		}

	  if ( l == 0 )
	  {
//		x1[i]=x2[i];
//		y1[i]=y2[i];
		opx2[i]=opx1[i];
		opy2[i]=opy1[i];
		code1=code2;
	  }
    }

   {
//	printf("Line drawn");
	setcolor(4);
	line(opx1[i],opy1[i],opx2[i],opy2[i]);
   }
   }
 }

}

void main()
{
  int c,x1[MAX],y1[MAX],x2[MAX],y2[MAX],ErrorCode,DETECT=0,GMode;
  initgraph(&DETECT,&GMode,"c:\\tcplus\\bgi");

  /* read result of initialization */
  ErrorCode = graphresult();

  if (ErrorCode != grOk)  /* an error occurred */
  {
	printf("Graphics error: %s\n", grapherrormsg(ErrorCode));
	printf("Press any key to halt:");
	getch();
	exit(1);             /* return with error code */
  }
  cleardevice();
  Init();
  Show();
  rectangle(left,top,right,bottom);
  c = DrawP(x1,y1,x2,y2);
  LineClipping(x1,y1,x2,y2,c);
//  SLine(x,y,c);
//  a(x,y,c);

  getch();
//  closegraph();
}
