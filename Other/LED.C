#include"lib.c"
void main()
{
char c;
int s=0;
clrscr();
while((c=getchar())!='\n'){
switch(c)
{
case '1':s+=2;
	break;
case '2':s+=5;
	break;
case '3':s+=5;
	break;
case '4':s+=4;
	break;
case '5':s+=5;
	break;
case '6':s+=6;
	break;
case '7':s+=3;
	break;
case '8':s+=7;
	break;
case '9':s+=6;
	break;
case '0':s+=6;
	break;
}
}
printf("%d",s);
getch();
}
