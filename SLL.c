#include<stdio.h>
#include<stdlib.h>
//function declaration
int read();
int insertion();
int deletion();
int display();
int searching(); 

struct node
{
	int data; 
	struct node *next;
}*head =  NULL,*newnode,*ptr;

//main functon

int main()
{
int opt,n;
	while(1)
	{
		printf("1.creation \n2.insertion \n3.deletion \n4.searching \n5.exit(1)");
		printf("Enter your option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				read();
				break;
			case 2:
				insertion();
				break;
			case 3:
				deletion();
				break;
			case 4:
				searching();
				break;
		    case 5:
		    	exit(1);
		    	break;
		    default:
		    	printf("Invalid Syntax");
		    					
		}
		display();
			
	}
return 0;
}   

int read()
{
	int i=1 ,n;
	while(i!=0)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		if(head = NULL)
		{
			head = newnode;
			newnode->next = NULL;
		}
		else
		{
			ptr = head;
			while(ptr->next != NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=newnode;
			newnode->next = NULL;
	    }
		printf("enter 0 to exit :");
		scanf("%d",&i);	
	}
 return 0;
 }  
 int insertion(){
 	printf("insetion");
}
 int deletion(){
 	printf("deletion");
}
 int searching(){
 	printf("searching");
}
int display(){
	printf("Display");
}
