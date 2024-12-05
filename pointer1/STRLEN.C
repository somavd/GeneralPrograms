/*
.............Streng length using pointer............
*/

#include"lib.c"

int StringLength(char *a)
{
int len=0;
while(*a!='\0'){
a++;
len++;
}
return len;
}

void main()
{
char a[20];
int n;
printf("\nEnter String\n");
gets(a);
n=StringLength(a);
printf("Length of String is %d",n);
getch();
}
x