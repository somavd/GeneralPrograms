
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
/*-------------------------------------------------*/
void draw_poly(int [],int [],int);
void translate(int [],int [],int);
void scale(int [],int [],int);
void rotate(int [],int [],int);
void mirror(int [],int [],int);

void identity_matrix(float [][3]);
void multiply_matrix(float [][3],float [][3]);

float r[3][3];
/*-------------------------------------------------*/
void main()
 {
    int gd=DETECT,gm;
    int arrayx[100],arrayy[100],n,i,j,x,y;
    int ch;

    clrscr();

    initgraph(&gd, &gm, "C:\\turboc3\\bgi");
    printf("\nEnter number of vertices for a polygon:");
    scanf("%d",&n);

    printf("\nEnter the x-y coordinates for %d number of vertices:\n",n);
    for(i=0,j=0;i<n;i++,j++)
     {
       printf("point %d:\n",i);
       printf("x:");
       scanf("%d",&x);

       printf("y:");
       scanf("%d",&y);

       arrayx[i]=x+320;
       arrayy[j]=240-y;
     }
	 draw_poly(arrayx,arrayy,n);
	 getch();

     while(1)
      {
	clrscr();
	cleardevice();
	printf("\n-------TRANSFORMATION OPTIONS----------\n\n");
	printf("1>Translate.\n2>Scale.\n3>Rotate.\n4>Mirror.\n5>Exit");
	printf("\nEnter Choice::");
	scanf("%d",&ch);

	switch(ch)
	 {
	   case 1: // Translation
	    translate(arrayx,arrayy,n);
	    getch();
	   break;

	   case 2: // Scaling
	     scale(arrayx,arrayy,n);
	     getch();
	   break;

	   case 3: // Rotation
	     rotate(arrayx,arrayy,n);
	     getch();
	   break;

	   case 4: // Mirroring
	     mirror(arrayx,arrayy,n);
	   break;

	   case 5:
	     printf("\n\nPress any key to Return Program...");
	     getch();
	     exit(0);

	   default:
	     printf("\nEnter valid choice.");
	}
     }
   }
/*-------------------------------------------------*/
void draw_poly(int arrayx[50],int arrayy[50],int n)
 {
   int i,j;

   for(i=0,j=0;i<n-1;i++,j++)
    {
      line(arrayx[i],arrayy[j],arrayx[i+1],arrayy[j+1]);
    }
    line(arrayx[0],arrayy[0],arrayx[n-1],arrayy[n-1]);
 }
/*-------------------------------------------------*/
void translate(int arrayx[50],int arrayy[50],int n)
 {
   int i,j;
   float a[3][3],b[3][3],tx,ty;

   printf("\nEnter translation factors:\n");
   printf("tx:=");scanf("%f",&tx);
   printf("\nty:=");scanf("%f",&ty);
   ty*=-1;
   clrscr();
UTNNHI:	  cleardevice();

   setcolor(RED);
   draw_poly(arrayx,arrayy,n);
   setcolor(WHITE);

   identity_matrix(a);
   identity_matrix(b);

   a[0][2]=tx;
   a[1][2]=ty;

   for(i=0,j=0;i<n;i++,j++)
    {
      arrayx[i]+=tx;
      arrayy[j]-=ty;

      b[0][2]=arrayx[i];
      b[1][2]=arrayy[j];

      multiply_matrix(b,a);

      arrayx[i]=r[0][2];
      arrayy[j]=r[1][2];
    }

    draw_poly(arrayx,arrayy,n);
    getch();
 }
/*-------------------------------------------------*/
void multiply_matrix(float b[3][3],float a[3][3])
 {
    int i=0,k=0,j=0;

    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
	{
	  r[i][j]=0;
	   for(k=0;k<3;k++)
	     {
	       r[i][j]=r[i][j] + b[i][k]*a[k][j];
	     }
	}

     }
 }
/*-------------------------------------------------*/
void identity_matrix(float a[3][3])
 {
   int i,j;

   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
	 if(i==j)
	   a[i][j]=1;
	 else
	   a[i][j]=0;
       }
    }
 }
/*-------------------------------------------------*/
void scale(int arrayx[50],int arrayy[50],int n)
 {
   int i,j;
   float a[3][3],b[3][3];
   float sx,sy;

   printf("\nEnter scaling factors:\n");
   printf("sx:=");
   scanf("%f",&sx);

   printf("\nsy:=");
   scanf("%f",&sy);

   clrscr();
   cleardevice();

   setcolor(GREEN);
   draw_poly(arrayx,arrayy,n);
   setcolor(RED);

   identity_matrix(a);
   identity_matrix(b);

   a[0][0]=sx;
   a[1][1]=sy;

   for(i=1,j=1;i<n;i++,j++)
    {
      arrayx[i]=arrayx[i]*sx+(1-sx)*arrayx[0];
      arrayy[j]=arrayy[j]*sy+(1-sy)*arrayy[0];

      b[0][0]=arrayx[i];
      b[1][1]=arrayy[j];

      multiply_matrix(b,a);

      arrayx[i]=r[0][0]+(1-sx)*arrayx[0];
      arrayy[j]=r[1][1]+(1-sy)*arrayy[0];
    }
    draw_poly(arrayx,arrayy,n);
    getch();
 }
/*-------------------------------------------------*/
void rotate(int arrayx[50],int arrayy[50],int n)
 {
   int i,j;
   float a[3][3],b[3][3];
   float theta;

   printf("\nEnter angle of rotation:\n");
   printf("THETA:=");
   scanf("%f",&theta);
   clrscr();
   cleardevice();

   setcolor(GREEN);
   draw_poly(arrayx,arrayy,n);
   setcolor(RED);

   identity_matrix(a);
   identity_matrix(b);

   a[0][0]=cos(theta);
   a[1][1]=cos(theta);
   a[1][0]=-sin(theta);
   a[0][1]=sin(theta);

   for(i=0,j=0;i<n;i++,j++)
    {
      b[0][0]=arrayx[i]-320;
      b[0][1]=arrayy[j]-240;
      multiply_matrix(b,a);

      arrayx[i]=r[0][0]+320;
      arrayy[j]=r[0][1]+240;
    }
    draw_poly(arrayx,arrayy,n);
    getch();
 }
/*-------------------------------------------------*/
void mirror(int arrayx[50],int arrayy[50],int n)
 {
   int ch,i,j;
   int tmp;

   clrscr();
   cleardevice();

   printf("\nMirror reflection Options.\n\n");
   printf("1. About x-axis.\n2. About y-axis.\n3. Relative to Origin.");
   printf("\nEnter choice:");
   scanf("%d",&ch);

   clrscr();
   cleardevice();

   setcolor(GREEN);
   draw_poly(arrayx,arrayy,n);
   setcolor(RED);

   for(i=0,j=0;i<n;i++,j++)
    {
      switch(ch)
       {
	 case 1:
	   arrayy[j]=240+(240-arrayy[j]);
	 break;

	 case 2:
	   arrayx[i]=320+(320-arrayx[i]);
	 break;

	 case 3:
	   arrayy[j]=240+(240-arrayy[j]);
	   arrayx[i]=320+(320-arrayx[i]);
	 break;

	 default:
	   printf("\nInvalid choice.");
       }
    }
    draw_poly(arrayx,arrayy,n);
    getch();
 }
/*-------------------------------------------------*/