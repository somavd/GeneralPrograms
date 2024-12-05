   #include<stdio.h>
   #include<conio.h>
   void main()
   {
   FILE *pr,*pw;
   char src[20],dest[20];
   float r;
   int h;
   clrscr();
   printf("Enter source file to copy");
   gets(src);
   pr=fopen(src,"r");
   printf("Enter destination file");
   gets(dest);
   pw=fopen(dest,"w");
   if(pr==NULL)
   printf("File not found");
   else
   {
   while(!feof(pr)){
   fputc(fgetc(pr),pw);
   }}
   fcloseall();
   printf("\nFile ccopied successfully\nPress any key to exit");
   getch();
   }
