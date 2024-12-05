#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
void main()
{
FILE *p;
char a[20],b[20];
float pr,pr1;
int q,q1,c1,gm=0,gd=DETECT,c=1;
initgraph(&gd,&gm,"..\\bgi");
setcolor(RED);
settextstyle(1,HORIZ_DIR,0);
outtextxy(0,0,"WELCOME TO MEDICAL MANAGEMENT");
while(c)
{
printf("\n\n\n\nEnter your choice\n1.Add new Item\n2.Update\n3.Purchase\n4.Show all data");
scanf("%d",&c);
if(c==1)
{
p=fopen("a.dat","a+");
printf("Enter Name");
scanf("%s",a);
printf("Enter price");
scanf("%f",&pr);
printf("Enter quantity");
scanf("%d",&q);
fwrite(a,20,1,p);
fwrite(&pr,sizeof(float),1,p);
fwrite(&q,sizeof(int),1,p);
fclose(p);
}
else if(c==2)
{
p=fopen("a.dat","r+");
printf("Enter name");
scanf("%s",a);
while(!feof(p))
{
fread(&b,20,1,p);
if(!strcmp(a,b))
break;
fread(&pr,4,1,p);
fread(&q,2,1,p);
}
c1='\0';
printf("Do u want to change price[y/n]");
scanf("%c",&c1);
c1='\0';
if(c1=='y')
{
printf("Enter new price");
scanf("%d",&pr);
fwrite(&pr1,4,1,p);
}
else
fread(&pr,4,1,p);
printf("Do u want to change quantity[y/n]");
scanf("%c",&c1);
if(c1=='y')
{
printf("Enter new quantity");
scanf("%d",&q);
fwrite(&q,2,1,p);
}
else
fread(&q,2,1,p);
printf("Updated");
fclose(p);
}
else if(c==3)
{
p=fopen("a.dat","r+");
printf("Enter name");
scanf("%s",a);
while(!feof(p))
{
fread(b,20,1,p);
if(!strcmp(a,b))
break;
fread(&pr,4,1,p);
fread(&q,2,1,p);
}
if(feof(p))
printf("Not found");
else
{
fread(&pr,4,1,p);
printf("Enter quantity");
scanf("%d",&q);
fread(&q1,2,1,p);
if((q1-q)<0)
printf("Stock not available");
else
printf("Bill=%f Rs.",(q*pr));
fprintf(p,"\r%s%f%d",b,pr,(q-q1));
}
}
else if(c==4)
{
p=fopen("a.dat","r");
printf("\nName\tprice\tQuantity\n");
do
{
fread(a,20,1,p);
fread(&pr,4,1,p);
fread(&q,2,1,p);
if(!feof(p))
printf("%s\t%f\t%d\n",a,pr,q);
}while(!feof(p));
fclose(p);
}
}
printf("Enter any key to exit.......");
getch();
}