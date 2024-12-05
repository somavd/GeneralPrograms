#include<stdio.h>
#include<stdlib.h>
#define MYNULL -1
struct node
{
	int data;
	int next;
	int valid;
};

int head;

int getNode(struct node *ll)
{
	//To check empty node in list
	for(int i=0;i<100;i++)
	{
		if(ll[i].valid==0)
		{
			ll[i].valid=1;
			ll[i].next=MYNULL;
			return i;
		}
	}
	return MYNULL;
}

void releaseNode(struct node *ll,int number)
{
	ll[number].valid=MYNULL;
}

void init(struct node *ll)
{
	//making list empty
	head=0;
	ll[0].next=MYNULL;
	ll[0].valid=0;
}

int add(struct node *ll,int number)
{
	int temp=head;
	if(ll[head].valid==0)
	{
		int new=getNode(ll);
		head=new;
		ll[head].data=number;
		return 1;
	}
	temp=head;
	int new=getNode(ll);
	if(new==MYNULL)
	{
		printf("OUT OF SPACE\n");
		return -1;
	}
	else
	{
		if(number<ll[head].data)
		{
			ll[new].data=number;
			ll[new].next=head;
			head=new;
			return 1;
		}
		temp=head;
	        while(ll[temp].next!=MYNULL&&ll[ll[temp].next].data<number)
                	temp=ll[temp].next;
		if(ll[ll[temp].next].data==number)
		{
			printf("NODE ALREADY EXIST IN LIST\n");
			return -1;
		}
		ll[new].next=ll[temp].next;
		ll[new].data=number;
		ll[temp].next=new;
		return 1;
	}
}

int delete(struct node *ll,int number)
{
	int temp=head;
	if(ll[head].data==number)
	{
		releaseNode(ll,head);
		head=ll[head].next;
		return 1;
	}
	while(ll[ll[temp].next].next!=MYNULL&&ll[ll[temp].next].data!=number)
		temp=ll[temp].next;
	if(ll[ll[temp].next].next==MYNULL)
	{
		if(ll[ll[temp].next].data==number)
		{
			releaseNode(ll,ll[temp].next);
			ll[temp].next=MYNULL;
			return 1;
		}
		else
			return -1;
	}
	ll[temp].next=ll[ll[temp].next].next;
	return 1;
}

void print(struct node *ll)
{
	int temp=head;
	while(temp!=MYNULL)
	{
		printf("%d ",ll[temp].data);
		if(ll[temp].next!=MYNULL)
			printf("->  ");
		temp=ll[temp].next;
	}
	printf("\n");
}

int search(struct node *ll,int number)
{
	int temp=head;
	while(temp!=MYNULL&&ll[temp].data<=number)
	{
		if(ll[temp].data==number)
			return 1;
		temp=ll[temp].next;
	}
	return 0;
}

int main()
{
	struct node list[100];
	char ch;
	int number;
	init(list);
	while(ch!='x')
	{
		scanf("%c",&ch);
		if(ch=='i')
		{
			scanf("%d",&number);
			if(add(list,number)==1)
				printf("SUCCESS\n");
		}
		else if(ch=='p')
			print(list);
		else if(ch=='s')
		{
			scanf("%d",&number);
			int flag=search(list,number);
			if(flag)
				printf("Found\n");
			else
				printf("Not Found\n");
		}
		else if(ch=='d')
		{
			scanf("%d",&number);
			if(delete(list,number)==1)
				printf("SUCCESS\n");
			else
				printf("ELEMENT NOT FOUND\n");
		}
		else if(ch=='x')
			exit(0);
		else
			printf("{i number} to add number to list\n{p} to print list\n{s number} to search number in list\n{d number to delete number from list\n{x} to exit\n\n");
		scanf("%c",&ch);
	}
	return 0;
}
