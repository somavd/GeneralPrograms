
#include<stdio.h>
#include<conio.h>
void main()
{
struct emply
{
int id;
char name[10];
float salary;
};
struct emply e,*p;
clrscr();

printf("\nEnter id,name,salary");
scanf("%d%s%f",&e.id,e.name,&e.salary);
printf("%d\t%s\t%f",e.id,e.name,e.salary);


printf("\nEnter id,name,salary");
scanf("%d%s%f",&(p->id),(p->name),&(p->salary));
printf("%d\t%s\t%f",p->id,p->name,p->salary);


p=&e;
printf("\nEnter id,name,salary");
scanf("%d%s%f",&(*p).id,&(*p).name,&(*p).salary);
printf("%d\t%s\t%f",(*p).id,(*p).name,(*p).salary);

printf("\nEnter any key to exit");
getch();
}ÿ