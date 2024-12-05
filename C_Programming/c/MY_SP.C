#include<stdio.h>
#include<math.h>
int main()
{
char z[20];
int a,b,c1=1,c2,c=1,d,n,i,j,m[100],e[100][100];
while(c)
{
printf("\n........BY SOMRAJ AVADUT..........\n0.Exit\n1.numbering system\n2.patterns\n3.Math Tricks\n4.Magic Square");
printf("\n........Enter your choice");
scanf("%d",&c);
switch(c)
{
case 1:	while(c1)
	{
	printf("\n\t0.exit\n\t1.Decimal to Binary\n\t2.Decimal to Octal\n\t3.Decimal to Hexadecimal\n\t4.Binary to Decimal\n\t5.Octal to decimal\n\t6.Hexadecimal to Decimal\n\t......Enter your choice");
	scanf("%d",&c1);
	switch(c1)
	{
	case 1:	printf("\n\tEnter decimal number");
		scanf("%d",&n);
		if(n==0)
		printf("Binary number is 0");
		else
		{
		i=0;
		while(n)
		{
		a=n%2;
		m[i]=a;
		i++;
		n=n/2;
		}
		i--;
		printf("\n\tBinary number of %d is :",n);
		while(i>-1){
		printf("%d",m[i]);
		i--;
		}
		}
		break;
	case 2:	printf("\n\tEnter decimal number");
		scanf("%d",&n);
		if(n==0)
		printf("\n\tOctal number is :0");
		else
		{
		i=0;
		while(n)
		{
		a=n%8;
		m[i]=a;
		n/=8;
		i++;
		}
		i--;
		printf("\n\tOctal number of %d is:",n);
		while(i>-1){
		printf("%d",m[i]);
		i--;
		}
		}
		break;
	case 3:	printf("\n\tEnter decimal number");
		scanf("%d",&n);
		if(n==0)
		printf("\n\thexadecimal number is: 0");
		else{
		i=0;
		while(n){
		a=n%16;
		if(a<10)
		m[i]=a;
		else if(a==10)
		m[i]='A';
		else if(a==11)
		m[i]='B';
		else if(a==12)
		m[i]='C';
		else if(a==13)
		m[i]='D';
		else if(a==14)
		m[i]='E';
		else
		m[i]='F';
		i++;
		n/=16;
		}
		i--;
		printf("\n\tHexadecimal number of %d is:",n);
		while(i>-1){
		if(m[i]<10)
		printf("%d",m[i]);
		else
		printf("%c",m[i]);
		i--;
		}}
		break;
	case 4:	printf("\n\tEnter Binary number");
		scanf("%d",&n);
		if(n==0)
		printf("\n\tDecimal number is: 0");
		else{
		i=d=0;
		while(n){
		a=n%10;
		if(a>1||a<0){
		printf("\n\tEnter valid number");
		break;
		}
		b=a*(pow(2,i));
		d=d+b;
		i++;
		n/=10;
		}
		printf("\n\tDecimal number of %d is: %d",n,d);
		}
		break;
	case 5:	printf("\n\tEnter Octal number");
		scanf("%d",&n);
		if(n==0)
		printf("\n\tDecimal number is :0");
		else{
		i=d=0;
		while(n){
		a=n%10;
		if(a<0||a>8){
		printf("Enter valid number");
		break;
		}
		d=d+a*(pow(8,i));
		i++;
		n/=10;
		}
		printf("\n\tDecimal number of %d  is : %d",n,d);
		}
		break;
	case 6:	printf("\n\tEnter Hexadecimal number");
		scanf("%s",z);
		for(i=0;z[i]!='\0';i++);
		i--;
		b=0;
		j=0;
		while(i>=0)
		{
		if(z[i]==('A'||'B'||'C'||'D'||'E'||'F'))
		a=z[i]-55;
		else
		a=z[i]-48;
		b+=a*pow(16,j);
		j++;
		i--;
		}
		printf("Decimal number of %s is %d",z,b);
		break;
	}
	}
	break;
case 2:	while(c1){
	printf("\n\t0...Exit\n\tPattern....1\n\tPattern....2\n\tPattern....3\n\tPattern....4\n\tPattern....5\n\tPattern....6\n\tPattern....7\n\tPattern....8\n\tPattern....9\n\tPattern....10\n\tPattern....11\n\tPattern....12\n\tPattern....13\n\tPattern....14\n\tPattern....15(1 to 100 a)\n\tPattern....16(1 to 100 m)\n\tPattern....17\n\tPattern....18\n\tPattern....19\n\tPattern....20\n\tPattern....21\n\tPattern....22\n\tEnter your choice");
	scanf("%d",&c1);
	switch(c1)
	{
	case 1:	for(i=0;i<7;i++){
		for(j=0;j<=7;j++)
		printf("* ");
		printf("\n");
		}
		break;
	case 2:	for(i=0;i<7;i++){
		for(j=0;j<=i;j++)
		printf("* ");
		printf("\n");
		}
		break;
	case 3:	for(i=0;i<7;i++){
		for(a=0;a<6-i;a++)
		printf("  ");
		for(j=0;j<=i;j++)
		printf(" *");
		printf("\n");
		}
		break;
	case 4:	for(i=0;i<7;i++){
		for(j=0;j<7-i;j++)
		printf("* ");
		printf("\n");
		}
		break;
	case 5:	for(i=0;i<7;i++){
		for(a=0;a<i;a++)
		printf("  ");
		for(j=0;j<7-i;j++)
		printf("* ");
		printf("\n");
		}
		break;
	case 6:	for(i=0;i<7;i++){
		for(a=0;a<(7-i);a++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		}
		break;
	case 7:	for(i=0;i<7;i++){
		for(a=0;a<i;a++)
		printf(" ");
		for(j=0;j<7-i;j++)
		printf("* ");
		printf("\n");
		}
		break;
	case 8:	for(i=0;i<7;i++){
		if(i%2!=0)
		printf("  ");
		for(j=0;j<=i/2;j++)
		printf("*   ");
		printf("\n");
		}
		while(i){
		if(i%2!=0)
		printf("  ");
		for(j=0;j<i/2;j++)
		printf("*   ");
		printf("\n");
		i--;
		}
		break;
	case 9:	for(i=0;i<7;i++){
		if(i%2==0)
		printf("  ");
		for(a=0;a<(7-i)/2;a++)
		printf("    ");
		for(j=0;j<=i/2;j++)
		printf("*   ");
		printf("\n");
		}
		while(i){
		if(i%2==0)
		printf("  ");
		for(a=0;a<=(7-i)/2;a++)
		printf("    ");
		for(j=0;j<i/2;j++)
		printf("*   ");
		printf("\n");
		i--;
		}	
		break;
				
	case 10:for(i=0;i<7;i++){
		for(a=0;a<7-i;a++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		}
		while(i){
		for(a=0;a<7-i;a++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		i--;
		}
		break;
	case 11:for(i=1;i<=7;i++){
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
		}
		break;
	case 12:for(i=0;i<7;i++){
		for(a=0;a<(7-i);a++)
		printf("  ");
		for(b=i-1;b>0;b--)
		printf("%d ",b);
		for(j=0;j<i;j++)
		printf("%d ",j);
		printf("\n");
		}
		break;
	case 13:for(i=1;i<7;i++){
		for(a=1;a<(7-i);a++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
		}
		break;
	case 14:for(i=1;i<7;i++){
		for(a=1;a<(7-i);a++)
		printf("  ");
		for(j=1;j<(i*2);j++)
		printf("%d ",j);
		printf("\n");
		}
		break;
	case 15:for(i=1;i<=10;i++){
		a=i;
		for(j=0;j<10;j++){
		printf("%4d",a);
		a=a+10;
		}
		printf("\n");
		}
		break;
	case 16:for(i=1;i<=10;i++){
		for(j=1;j<=10;j++)
		printf("%4d",i*j);
		printf("\n");
		}
		break;
	case 17:c=1;
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(j<=i)
		printf("%4d",c);
		c++;
		}
		printf("\n");
		}
		break;
	case 18:for(i=0;i<9;i++){
		if(i==4){
		for(j=0;j<9;j++)
		printf("* ");
		}
		else
		{
		for(j=0;j<4;j++)
		printf("  ");
		printf("* ");
		}
		printf("\n");
		}
		break;	
	case 19:for(i=0;i<4;i++){
		for(j=0;j<i;j++)
		printf("  ");
		printf("* ");
		for(a=0;a<(7-2*i);a++)
		printf("  ");
		printf("* ");
		printf("\n");
		}
		for(i=4;i>=0;i--){
                for(j=0;j<i;j++)
                printf("  ");
                printf("* ");
                for(a=0;a<(7-2*i);a++)
                printf("  ");
                if(i!=4)
		printf("* ");
                printf("\n");
                }
		break;
	case 20: i='A';
		for(j=0;j<26;j++,i++)
		printf("%c",i);
		break;
	}
	}
	break;
case 3: c2=1;
	while(c2){
	printf("\n0.Exit\n1.B'day");
	printf("\nEnter your choice");
	scanf("%d",&c2);
	switch(c2){
	case 1:	printf("\nFollow the Fillowing Process.......\n\t\t1.Multiply your B'day month by 2\n\t\t2.Add 5 to it\n\t\t3.Multiply by 50\n\t\t4.Add B'day date to itr\n\t\tNow........\n\t\tEnter your answer");
	scanf("%d",&a);
	if(a<301||a>1481)
	printf("\t\tEnter Proper Answer");
	else{
	b=(a/100)-2;
	d=a%50;
	printf("\n\t\tYour B'day date is.......\n\t\tMonth=%d\tDate=%d",b,d);
	}
	break;	
	}
	}
	break;
case 4:	printf("\nEnter Size of magic square");
	scanf("%d",&b);
	if(b%2==0)
	printf("Magic Square with even size can not created.....");
	else{
	for(i=0;i<b;i++){
	for(j=0;j<b;j++)
	e[i][j]=0;
	}
	c=1;
	j=i=0;
	while(c<=b*b){
	if(c==1){
	i=b/2;
	j=0;
	}
   	else if(j<0&&i==b){
	i--;
	j=j+2;
	}
	else if(j<0&&0<=i<b)
	j=b-1;
	else if(i==b&&0<=j<b)
	i=0;
	else if(e[i][j]!=0){
	i--;
	j++;
	j++;
	}
	else;
	e[i][j]=c;
	i++;
	j--;
	c++;
	}
	for(i=0;i<b;i++){
	for(j=0;j<b;j++)		
	printf("%3d",e[j][i]);
	printf("\n");
	}
	}
	break;
}
} 
printf("\nThanking You.......\n");
return 0;
}	


