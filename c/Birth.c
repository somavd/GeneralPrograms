#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,d
	printf("\nFollow the Fillowing Process.......\n\t\t1.Multiply your B'day month by 2\n\t\t2.Add 5 to it\n\t\t3.Multiply by 50\n\t\t4.Add B'day date to itr\n\t\tNow........\n\t\tEnter your answer");
	scanf("%d",&a);
	if(a<301||a>1481)
	printf("\t\tEnter Proper Answer");
	else{
	b=(a/100)-2;
	d=a%50;
	printf("\n\t\tYour B'day date is.......\n\t\tMonth=%d\tDate=%d",b,d);
	printf("Press any key to exit....");
getch();
}
	