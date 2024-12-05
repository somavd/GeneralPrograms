/*
     Introduction to "Pointer"
     Scanf without & operator
*/

#include"lib.c"
void main()
{
int *p,i,j;
int *q=&j;
//here p is pointer of datatype int

clrscr();
p=&i;

//Address of i is stored in p

printf("\nEnter any two numbers");
scanf("%d%d",p,q);
printf("%d=%d\n%d=%d",i,*p,j,*q);
printf("\nEnter any key to exit");
getch();
}