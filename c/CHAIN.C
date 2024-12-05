

#include<stdio.h>
#include<conio.h>
void main()
{
int i,*p,**q,***r;
p=&i;
q=&p;
r=&q;


printf("\nEnter any number");
scanf("%d",&i);
printf("%d",i);


printf("\nEnter any number");
scanf("%d",p);
printf("%d",*p);


printf("\nEnter any number");
scanf("%d",*q);
printf("%d",**q);


printf("\nEnter any number");
scanf("%d",**r);
printf("%d",***r);

printf("\nEnter any key to exit");
getch();
}