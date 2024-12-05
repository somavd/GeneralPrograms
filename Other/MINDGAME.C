#include<stdio.h>
#include<stdlib.h>
void main()
{
int life=5,b[4],a[4],i=0,f,j;
again:
while(i<1023)
i=random(10000);
j=0;
while(i)
{
a[j++]=i%10;
i/=10;
}
for(j=0;j<3;j++)
for(i=j+1;i<4;i++)
if(a[i]==a[j])
goto again;
while(1)
{
printf("Enter number");
scanf("%d",&j);
i=j;
f=0;
while(i)
{
b[f++]=i%10;
i/=10;
}
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(b[i]==a[j]&&i==j)
{
printf("%d \t right number \tright position\n",b[i]);
break;
}
if(b[i]==a[j]&&i!=j)
{
printf("%d \t right number \t wrong position\n",b[i]);
break;
}
}
if(j==4)
printf("%d \t Wrong number\n",b[i]);
}
life--;
if(life==0)
{
printf("You Lose and number was %d%d%d%d",a[0],a[1],a[2],a[3]);
exit(0);
}
for(i=0;i<4;i++)
if(a[i]!=b[i])
{
f=0;
break;
}
if(i==4)
{
printf("You Win");
getch();
exit(0);
}
printf("life = %d",life);
}
}



