 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct list{
 int ele;
 struct list *next;
 }*l1,*l2,*l,*p,*q,*r,*t;


 void sort(struct list *p)
 {
	while(p!=NULL)
			{
			   q=p->next;
			   while(q!=NULL)
					{
						if((p->ele)>(q->ele))
							{
							p->ele+=q->ele;
							q->ele=p->ele-q->ele;
							p->ele-=q->ele;
							}
						q=q->next;
					}
			p=p->next;
			}
}
 void main()
 {
 int c=1,f=0;
 clrscr();

 printf("Enter elements for first list\n");
 do{
 t=(struct list *)malloc(sizeof(struct list));
 printf("Enter element");
 scanf("%d",&(t->ele));
 t->next=NULL;
 if(l1==NULL)
 {
 l1=t;
 p=t;
 }
 else
 {
 p->next=t;
 p=p->next;
 }
 printf("want to enter one more element[1 for add]");
 scanf("%d",&c);
 }while(c==1);

 printf("Enter elements for second list\n");
 do{
  t=(struct list *)malloc(sizeof(struct list));
 printf("Enter element");
 scanf("%d",&(t->ele));
 t->next=NULL;
 if(l2==NULL)
 {
 l2=t;
 p=t;
 }
 else
 {
 p->next=t;
 p=p->next;
 }
 printf("want to enter one more element[1 for add]");
 scanf("%d",&c);
 }while(c==1);

 printf("\nFirst list is\n");
 p=l1;
 while(p!=NULL)
 {
 printf("%d\t",p->ele);
 p=p->next;
 }

 printf("\nSecond list is\n");
 p=l2;
 while(p!=NULL)
 {
 printf("%d\t",p->ele);
 p=p->next;
 }

 sort(l1);
 sort(l2);

 p=l1;
 while(p!=NULL)
 {
 q=l2;
 while(q!=NULL)
 {
 if(p->ele==q->ele)
 break;
 q=q->next;
 }
 if(q!=NULL)
 break;
 p=p->next;
 }
 if(p!=NULL)
 {
 printf("\nTwo arrays are intersected at %d",q->ele);
 c=q->ele;
 }
 else
 printf("\nArrays are not intersected");

 p=l1;
 q=l2;
 while(p!=NULL&&q!=NULL)
 {
 if(p->ele>q->ele)
 {
 if(c!=q->ele||f!=1)
 {
 if(l==NULL)
 {
 l=q;
 r=q;
 }
 else
 r->next=q;
 r=q;
 if(c==q->ele)
 f=1;
 }
 q=q->next;
 }
 else
 {
 if(c!=p->ele||f!=1)
 {
 if(l==NULL)
 {
 l=p;
 r=p;
 }
 else
 r->next=p;
 r=p;
 if(c==p->ele)
 f=1;
 }
 p=p->next;
 }
 }
 if(p==NULL)
 r->next=q;
 else
 r->next=p;
 p=l;
 printf("\nResult is \n");
 while(p!=NULL)
 {
 printf("%d\t",p->ele);
 p=p->next;
 }
 getch();
 }




