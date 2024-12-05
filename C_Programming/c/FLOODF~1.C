#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<process.h>

void fll(float,float,int);

union REGS i,o;

struct stack
{
	int top;
	int arr[10000][2];
}sp;

void push(float sx,float sy)
{
	sp.top++;
	sp.arr[sp.top][0]=sx;
	sp.arr[sp.top][1]=sy;
}

void pop(float *sx,float *sy)
{
	if(sp.top==-1)
		printf("\n\nSTACK EMPTY");
	else
	{
		*sx=sp.arr[sp.top][0];
		*sy=sp.arr[sp.top][1];
		sp.top--;
	}
}

int initmouse()
{
	i.x.ax=0;
	int86(0x33,&i,&o);
	return(o.x.ax);
}
void showmptr()
{
	i.x.ax=1;
	int86(0x33,&i,&o);
}

void hidemptr()
{
	i.x.ax=2;
	int86(0x33,&i,&o);
}

void getmptr(int *button,float *x,float *y)
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	*button=o.x.bx;
	*x=o.x.cx;
	*y=o.x.dx;
}

/*void setmpos(float x,float y)
{
	i.x.ax=4;
	o.x.cx=x;
	o.x.dx=y;
	int86(0x33,&i,&o);
} */

void nrboundry(float sx1,float sy1,int nc,int bc)
{
	int current;
	float sx,sy;
	putpixel(sx1,sy1,nc);
	push(sx1,sy1);
	while(sp.top!=-1)
	{
		delay(1);
		pop(&sx,&sy);

		current=getpixel(sx,sy);
		if(current!=bc && current!=nc)
			putpixel(sx,sy,nc);

		current=getpixel(sx+1,sy);
		if(current!=bc && current!=nc)
			push(sx+1,sy);

		current=getpixel(sx-1,sy);
		if(current!=bc && current!=nc)
			push(sx-1,sy);

		current=getpixel(sx,sy+1);
		if(current!=bc && current!=nc)
			push(sx,sy+1);

		current=getpixel(sx,sy-1);
		if(current!=bc && current!=nc)
			push(sx,sy-1);
	}
}

void nrflood(float sx1,float sy1,int nc)
{
	int current;
	float sx,sy;
	putpixel(sx1,sy1,nc);
	push(sx1,sy1);
	while(sp.top!=-1)
	{
		delay(1);
		pop(&sx,&sy);

		current=getpixel(sx,sy);
		if(current==BLACK)
			putpixel(sx,sy,nc);

		current=getpixel(sx+1,sy);
		if(current==BLACK)
			push(sx+1,sy);

		current=getpixel(sx-1,sy);
		if(current==BLACK)
			push(sx-1,sy);

		current=getpixel(sx,sy+1);
		if(current==BLACK)
			push(sx,sy+1);

		current=getpixel(sx,sy-1);
		if(current==BLACK)
			push(sx,sy-1);
	}
}

void boundryfill(float sx,float sy,int bc,int nc)
{
	int current;
	current=getpixel(sx,sy);
	if(current!=bc && current!=nc)
	{
		putpixel(sx,sy,nc);
		boundryfill(sx-1,sy,bc,nc);
		boundryfill(sx,sy-1,bc,nc);
		boundryfill(sx+1,sy,bc,nc);
		boundryfill(sx,sy+1,bc,nc);
	}
}



void main()
{
	int gd=DETECT,gm;
	int button,bc=15,nc=13;
	float x,y,sx,sy;
	char cho;

	int xx[20],yy[20],ch,i=0;
	clrscr();
	sp.top=-1;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	initmouse();

	do
	{
	i=0;
	clrscr();
	cleardevice();
  //	printf("\nDRAW POLYGON");
	showmptr();
	do
	{
		delay(150);
		getmptr(&button,&x,&y);
		if(button==1)
		{
			xx[i]=x;
			yy[i]=y;
			if(i!=0)
			{
				hidemptr();
				line(xx[i],yy[i],xx[i-1],yy[i-1]);
				showmptr();
			}
			i++;
		}
	}while(button!=2);
	if(button==2)
	{
		hidemptr();
		line(xx[i-1],yy[i-1],xx[0],yy[0]);
		showmptr();
	}
		printf("\n\t1:boundry(non)");
		printf("\n\t2:floodfill(non)");
		printf("\n\t3:Boundryfill");
		printf("\n\t4:floodfill");
		printf("\n\t5:exit");

		printf("\n\n\tENTER UR CHOICE: ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				showmptr();
				do
				{
					delay(100);
					getmptr(&button,&x,&y);
				}while(button!=1);
				sx=x;
				sy=y;
				hidemptr();
				nrboundry(sx,sy,3,15);
				break;

			case 2:
				showmptr();
				do
				{
					delay(100);
					getmptr(&button,&x,&y);
				}while(button!=1);
				sx=x;
				sy=y;
				hidemptr();
				nrflood(sx,sy,3);
				break;

			case 3:
				showmptr();
				do
				{
					delay(100);
					getmptr(&button,&x,&y);
				}while(button!=1);
				sx=x;
				sy=y;
				hidemptr();
				boundryfill(sx,sy,bc,nc);
				break;

			case 4:
				showmptr();
				do
				{
					delay(100);
					getmptr(&button,&x,&y);
				}while(button!=1);
				sx=x;
				sy=y;
				hidemptr();
				fll(sx,sy,nc);
				break;

			case 5:
				exit(0);
				break;
		}
		printf("\n\nconti...");
		cho=getche();
	}while(cho=='y'||cho=='Y');
getch();
}
void fll(float sx,float sy,int nc)
{
	int current;
	current=getpixel(sx,sy);
	hidemptr();
	if(current==BLACK)
	{
		putpixel(sx,sy,nc);
		fll(sx-1,sy,nc);
		fll(sx,sy+1,nc);
		fll(sx+1,sy,nc);
		fll(sx,sy-1,nc);
	}
	showmptr();
}
