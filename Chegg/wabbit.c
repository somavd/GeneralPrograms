#include<stdio.h>

int main()
{
	int i,j,x,y,hits=0;
	char mat[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ','S',' ',' ',' ',' ',' ',' '},{' ','S',' ',' ',' ',' ',' ',' '},{' ','S',' ',' ',' ',' ',' ',' '},{' ','S',' ',' ',' ',' ',' ',' '},{' ','S',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ','S','S','S',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
	while(hits!=8)
	{
		printf("Enter x : ");
		scanf("%d",&x);
		printf("Enter y : ");
		scanf("%d",&y);
		if(mat[y][x]=='S')
		{
			printf("Hit\n");
			mat[y][x]='!';
			hits++;
		}
		else if(mat[y][x]==' ')
		{
			printf("Miss\n");
			mat[y][x]='X';
		}
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(mat[i][j]!='S')
					printf("|%c",mat[i][j]);	
				else
					printf("| ");
			}
			printf("|\n");
		}
	}

	return 0;
}
