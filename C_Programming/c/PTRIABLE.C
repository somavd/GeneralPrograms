/*
"...............Programme to print pattern.................."
*
* *
* * *
* * * *
* * * * *
*/

#include"lib.c"
void main()
{
	int i,col,row=0;
	printf("Enter number of columns");
	scanf("%d",&row);


//outer loop defines no. of rows


		for(i=0;i<row;i++)
		{


/* inner loop defines no. of '*'
for i'th row and "col<i",B'coz in
i'th row there are i no. of '*'s */


			for(col=0;col<=i;col++)
			{
			printf("* ");
			}
		printf("\n");
		}
	getch();
}