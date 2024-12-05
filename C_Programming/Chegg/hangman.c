#include<stdio.h>
#include<string.h>

int play(char *ans, char *guess,int n)
{
	char ch;
	//Repeat until numebr of chances
	for(int i=0;i<n;i++)
	{
		printf("Enter Character : ");
		scanf(" %c",&ch);  //read character
		for(int j=0;j<strlen(ans);j++)
		{
			if(ans[j]==ch)		//if character found in answer string then replace char in guess string
				guess[j]=ch;
		}
		if(!strcmp(ans,guess))		//if ans and guess matches then end and return 1 to indicate you have won
			return 1;
		printf("%s\n",guess);		//print guessed string every time
	}
	return 0;
}

int main()
{
	//specify here your string
	char ans[]="dictionary",guess[100];
	for(int i=0;i<strlen(ans);i++)
		guess[i]='*';	//making every unidentified character '*'
	//n is number of chances to guess character
	int n=10;
	int win=play(ans,guess,n);
	if(win==1)
		printf("You have won\n");
	else
		printf("You Lost\n");
	return 0;
}
