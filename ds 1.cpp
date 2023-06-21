#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,k,b,c;
	struct node {
		struct node *prev;
		int a;
		struct node *next;
	}*head,*ptr,*ptr1;
	printf("please enter the no. of nodes you want ::");
	scanf("%d",&n);
	struct node node[n];
	head=&node[0];
	ptr=head;
	printf("please enter the data of nodes\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&node[i].a);
		if(i<n-1)
		{
			node[i].next=&node[i+1];
		}
		else
		{
			node[i].next='\0';
		}
		if(i>0)
		{
			node[i].prev=&node[i-1];
		}
	}
	printf("please enter \n 1 for insersion \n 2 for deletion \n 3 for searching \n");
	scanf("%d",&k);
	if(k==1)
	{
		struct node nn;
		printf("please enter the data (integer) of the new node ::");
		scanf("%d",&nn.a);
		printf("please enter the position you want to inseart ::");
		scanf("%d",&b);
		if(b>n+1)
		{
			printf("the entered position is not available so it'll be appended in the last position \n");
			while(ptr->next!='\0')
			{
				ptr=ptr->next;
			}
			ptr->next=&nn;
			nn.next='\0';
			nn.prev=ptr;
		}
		else if(b>1)
		{
			ptr=head;
			for(i=2;i<b;i++)
			{
				ptr=ptr->next;
			}
			ptr1=ptr->next;
			nn.next=ptr1;
			nn.prev=ptr;
			ptr->next=&nn;
			ptr->prev=&nn;
		}
		else 
		{
			ptr=head;
			nn.next=ptr;
			nn.prev='\0';
			ptr->prev=&nn;
			head=&nn;
		}
	}
	else if(k==2)
	{
		c=1;
		while(c==1)
		{
			c=0;
			printf("please enter the position you want to delete ::");
			scanf("%d",&b);
			if(b>n+1||b<1)
			{
				printf("the position you want to delete doesn't exists please chose a correct position \n");
				c=1;
			}
		}
		if(b==n)
		{
			while(ptr->next->next!='\0')
			{
				ptr=ptr->next;
			}
			free(ptr->next);
			ptr->next='\0';
		}
		else if(b>1)
		{
			ptr=head;
			for(i=1;i<b;i++)
			{
				ptr=ptr->next;
			}
			ptr->next->prev=ptr->prev;
			ptr->prev->next=ptr->next;
			free(ptr);
		}
		else 
		{
			ptr=head;
			head->next->prev='\0';
			head=head->next;
			free(ptr);
		}
	}
	else if(k==3)
	{
		printf("please enter the key you want to search ::");
		scanf("%d",&b);
		ptr=head;
		i=0;
		while(ptr!='\0')
		{
			i++;
			if(ptr->a==b)
			{
				printf("the key %d is found in the %d node\n",b,i);
				break;
			}
			ptr=ptr->next;
			}
			if(ptr=='\0')
			{
				printf("the key is not found");
				}	
	}
	i=0;
	ptr=head;
	while(ptr!='\0')
	{
		i++;
		printf("the data in the node %d is %d\n",i,ptr->a);
		ptr=ptr->next;
	}
	return 0;
}

