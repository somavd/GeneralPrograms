#include<stdio.h>
int main()
{
int k,a,j,n,i,f[10]={0},need[10][3]={0},alloc[10][3],avail[3],max[10][3];
printf("Enter number of process");
scanf("%d",&n);
printf("Enter number of resources available A,B,C");
scanf("%d%d%d",&avail[0],&avail[1],&avail[2]);
for(i=0;i<n;i++){
printf("Enter maximum need of resourecs for %d process",(i+1));
for(j=0;j<3;j++)
scanf("%d",&max[i][j]);
}
for(i=0;i<n;i++){
printf("Enter allocated resourecs for %d process",(i+1));
for(j=0;j<3;j++)
scanf("%d",&alloc[i][j]);
}
for(i=0;i<n;i++){
for(j=0;j<3;j++)
need[i][j]=max[i][j]-alloc[i][j];
}

printf("Process\t\tmax\t\talloc\t\tneed\n");
for(i=0;i<n;i++){
printf("%d\t",(i+1));
for(j=0;j<3;j++)
printf("%d\t",max[i][j]);
printf("|");
for(j=0;j<3;j++)
printf("%d\t",alloc[i][j]);
printf("|");
for(j=0;j<3;j++)
printf("%d\t",need[i][j]);
printf("\n");

}

for(i=0;i<n;i++){
for(j=0;j<3;j++)
avail[j]-=alloc[i][j];
}
for(i=0;i<3;i++)
printf("\t%d",avail[i]);
for(i=0;i<n;i++){
for(j=0;j<n;j++)
{
if(f[j]==0){
for(k=0;k<3;k++)
{
if(need[j][k]<=avail[k]);
else
break;
}
if(k==3){
for(a=0;a<3;a++){
need[j][a]-=need[j][a];
avail[a]+=alloc[j][a];
}
f[j]=1;
printf("\nAfter %d process",(j+1));
for(j=0;j<3;j++)
printf("%d\t",avail[j]);
printf("\n");
goto abc;
}
}
}
abc:{}
}
for(i=0;i<n;i++){
if(f[i]!=1)
break;
}
if(i==n)
printf("Safe state");
else
printf("Not in safe state");


return 0;
}
