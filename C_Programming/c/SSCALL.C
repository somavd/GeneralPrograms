#include<stdio.h>
#include<conio.h>
void main()
{
int id,pid;
id=fork();
if(id==0)
{
printf("child process id=%d",id);
pid=getpid();
printf("parent process id=%d",pid);
}
else if(id<0)
printf("No process");
else
{
wait();
printf("parent process id=%d",id);
}
getch();
}