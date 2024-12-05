/*
..........Array of structure...............
*/

#include"lib.c"

void main()
{
int i,n;
typedef struct stud
{
int roll_no;
char name[10];
char cls[10];
float fees;
}student;
student std[20],*p;
p=std;
printf("Enter number of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter roll number,name,class[eg.TE-CSE],fees");
scanf("%d%s%s%f",&(p->roll_no),p->name,p->cls,&(p->fees));
//scanf("%f",&(p->fees));
p++;
}
p=std;
printf("\nRoll number\tName\tClass\tfees");
for(i=0;i<n;i++)
{
printf("\n%d\t\t%s\t%s\t%.2f",p->roll_no,p->name,p->cls,p->fees);
p++;
}
getch();
}
