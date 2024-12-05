/*
.............Fibonacci Series...........
*/


#include"lib.c"

int fibo(int n)
{
if(n==0||n==1)
return n;
else
return fibo(n-1)+fibo(n-2);
}

void main()
{
int n,i;
clrscr();
printf("Enter range");
scanf("%d",&n);
printf("All series........\n");
for(i=0;i<n;i++)
printf("%d ",fibo(i));
printf("\nEven Series......\n");
for(i=0;i<n;i++)
if(i%2==0)
printf("%d ",fibo(i));
printf("\nOdd series...........\n");
for(i=0;i<n;i++)
if(i%2!=0)
printf("%d ",fibo(i));
getch();
}
