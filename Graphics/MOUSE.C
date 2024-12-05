#ifndef __DOS_H
#include <dos.h>
#endif

int mouse_status;
int mouse_x;
int mouse_y;


int  mouse_reset(void);
void mouse_enable(void);
void mouse_disable(void);
void mouse_read_cursor(void);
void mouse_horizontal_range(int xmin, int xmax);
void mouse_vertical_range(int ymin, int ymax);

/*************************************************************************
*                                                                        *
*                           F U N C T I O N S                            *
*                                                                        *
*************************************************************************/

/*----------------------------------------------------------------------*/

int mouse_reset(void)
{
   _AX=0;
   geninterrupt(0x33);
   return(_AX);
}	/* mouse_reset */

/*----------------------------------------------------------------------*/

void mouse_enable(void)
{
   _AX=1;
   geninterrupt(0x33);
}	/* mouse_enable */


/*----------------------------------------------------------------------*/

void mouse_disable(void)
{
   _AX=2;
   geninterrupt(0x33);
}	/* mouse_disable */

/*----------------------------------------------------------------------*/

void mouse_read_cursor(void)
{
   _AX=3;
   geninterrupt(0x33);
   mouse_status=_BX;
   mouse_x=_CX;
   mouse_y=_DX;
}	/* mouse_read_cursor */

/*----------------------------------------------------------------------*/

void mouse_horizontal_range(int xmin, int xmax)
{
   _AX=7;
   _CX=xmin;
   _DX=xmax;
   geninterrupt(0x33);
}	/* mouse_vertical_range */

/*----------------------------------------------------------------------*/

void mouse_vertical_range(int ymin, int ymax)
{
   _AX=8;
   _CX=ymin;
   _DX=ymax;
   geninterrupt(0x33);
}	/* mouse_vertical_range */
