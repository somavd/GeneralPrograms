   #include"lib.c"
   void main()
   {
   FILE *pr,*pw;
   char a[10],b[2];
   float r;
   int h;
   pr=fopen("src.txt","r");
   pw=fopen("dest.txt","w");
   /*do{
   printf("Enter details");
   scanf("%s%s%f%d",a,b,&r,&h);
   fprintf(pr,"%s%s%.2f%d",a,b,r,h);
   }while(h!=50);  */
   rewind(pr);
   while((fscanf(pr,"%s%s%f%d",a,b,&r,&h))!=EOF){
   fprintf(pw,"\n%s  %s\t%.2f\t%d",a,b,&r,&h);
	fcloseall();
   }
   getch();
   }
