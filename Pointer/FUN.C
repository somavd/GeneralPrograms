

#include<stdio.h>
#include<conio.h>
int add(int a,int b)  	  
{
return a+b;
}
void main()
{
int (*p)(int,int);  	  
clrscr();
p=add;                    
printf("\n%d",(*p)(5,5)); 
printf("\nEnter any key to exit");
getch();
}ÿ