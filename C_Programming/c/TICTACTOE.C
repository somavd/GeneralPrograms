# include<iostream.h>
#include<conio.h>
# define max 10
void main()
{
char a[max]={'0','1','2','3','4','5','6','7','8'};
int t;
char n1[30],n2[30];
int p1,p2,c1=0,c2=0;
clrscr();
cout<<"\nEnter the name of player choosing X:";
cin.getline(n1,30);
cout<<"\nEnter the name of the player choosingO:";
cin.getline(n2,30);
gotoxy(27,7); cout<<a[0]<<"\t"<<a[1]<<"\t"<<a[2];
gotoxy(27,8);cout<<a[3]<<"\t"<<a[4]<<"\t"<<a[5];
gotoxy(27,9);cout<<a[6]<<"\t"<<a[7]<<"\t"<<a[8];
//main program
do
{
gotoxy(60,4);cout<<"TIC TAC TOE";
gotoxy(60,5);cout<<"------------";
gotoxy(20,15);clreol();
gotoxy(20,15);cout<<"\nEnter the position you want to enter X(Rewrite on old value):";
cin>>p1;
if(p1==0||p1==1||p1==2||p1==3||p1==4||p1==5||
p1==6||p1==7||p1==8)
a[p1]='X'; c1++;
gotoxy(27,7); cout<<a[0]<<"\t"<<a[1]<<"\t"<<a[2];
gotoxy(27,8);cout<<a[3]<<"\t"<<a[4]<<"\t"<<a[5];
gotoxy(27,9);cout<<a[6]<<"\t"<<a[7]<<"\t"<<a[8];
getch();
if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'||a[3]=='X'&&a
[4]=='X'&&a[5]=='X'|| a[6]=='X'&&a[7]=='X'&&a
[8]=='X'||a[0]=='X'&&a[3]=='X'&&a[6]=='X'||
a[1]=='X'&&a[4]=='X'&&a[7]=='X'||a[2]=='X'&&a
[5]=='X'&&a[8]=='X'|| a[0]=='X'&&a[4]=='X'&&a
[8]=='X'||a[2]=='X'&&a[4]=='X'&&a[6]=='X')
{
break;
}
gotoxy(20,15);clreol();
gotoxy(20,15);cout<<"\nEnter the position you want to enter O(Rewrite on old value):";
cin>>p2;
if(p2==0||p2==1||p2==2||p2==3||p2==4||p2==5||
p2==6||p2==7||p2==8)
a[p2]='O'; c2++;
gotoxy(27,7); cout<<a[0]<<"\t"<<a[1]<<"\t"<<a[2];
gotoxy(27,8);cout<<a[3]<<"\t"<<a[4]<<"\t"<<a[5];
gotoxy(27,9);cout<<a[6]<<"\t"<<a[7]<<"\t"<<a[8];
getch();
if(a[0]=='O'&&a[1]=='O'&&a[2]=='O'||a[3]=='O'&&a
[4]=='O'&&a[5]=='O'|| a[6]=='O'&&a[7]=='O'&&a
[8]=='O'||a[0]=='O'&&a[3]=='O'&&a[6]=='O'||
a[1]=='O'&&a[4]=='O'&&a[7]=='O'||a[2]=='O'&&a
[5]=='O'&&a[8]=='O'|| a[0]=='O'&&a[4]=='O'&&a
[8]=='O'||a[2]=='O'&&a[4]=='O'&&a[6]=='O')
{
break;
}
}while(p1>=0&&p2>=0&&c1<5&&c2<4);
//BRAIN
if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'||a[3]=='X'&&a
[4]=='X'&&a[5]=='X'|| a[6]=='X'&&a[7]=='X'&&a
[8]=='X'||a[0]=='X'&&a[3]=='X'&&a[6]=='X'||
a[1]=='X'&&a[4]=='X'&&a[7]=='X'||a[2]=='X'&&a
[5]=='X'&&a[8]=='X'|| a[0]=='X'&&a[4]=='X'&&a
[8]=='X'||a[2]=='X'&&a[4]=='X'&&a[6]=='X')
{
t=1;
goto program;
}
else if(a[0]=='O'&&a[1]=='O'&&a[2]=='O'||a[3]=='O'
&&a[4]=='O'&&a[5]=='O'|| a[6]=='O'&&a[7]=='O'&&a
[8]=='O'||a[0]=='O'&&a[3]=='O'&&a[6]=='O'||
a[1]=='O'&&a[4]=='O'&&a[7]=='O'||a[2]=='O'&&a
[5]=='O'&&a[8]=='O'|| a[0]=='O'&&a[4]=='O'&&a
[8]=='O'||a[2]=='O'&&a[4]=='O'&&a[6]=='O')
{
t=2;
goto program;
}
else
{
t=0;
goto program;
}
program:
if(t==1)cout<<"\nWinner is "<<n1;
if(t==2)cout<<"\nWinner is "<<n2;
if(t==0)cout<<"\nMatch drawn";
getch();
}

