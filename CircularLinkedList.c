#include<stdio.h>
#include<stdlib.h>
// function declaration 
int read(void);
int display(void);
int insertion(void);
int deletion(void);
int searching(void);
//structure creation 
struct node{
	int data;
	struct node *next;
}*head= NULL,*p,*qtr,*r,*nn,*ptr;
// main function
int main(){
	while(1){
	int n;
	printf("1 create list \n 2 insertation \n 3 deletion \n 4 searching \n 5 exit");
	printf("\nChoose your option :");
	scanf("%d",&n);
	switch(n){
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
			printf("Programme terminated...");
			exit(1);
			break;
		default:
			printf("Invalid Syntax");
	}
	display();
}
}
// funcion to read the node element's
int read(){
	int i =1;
	while(i != 0){
		nn = (struct node *)malloc(sizeof(struct node));
		printf("Enter the node data :");
		scanf("%d",&nn->data);
		if(head == NULL){
			head = nn;
			nn->next = head;
		}
		else{
			ptr = head;
			while(ptr->next !=head){
				ptr = ptr->next;
			}
			ptr->next = nn;
			nn->next = head;
		}
		printf("Presse any number to creat new node 0 to exit:");
		scanf("%d",&i);
	}
	return 0;
}
// function to display the node element's
int display(){
	ptr = head;
	int i = 0;
	while(ptr->next!=head){
		printf("\nThe data at node %d is %d ",i,ptr->data);
		ptr = ptr->next;
		i++;
	}
	printf("\nThe data at node %d is %d ",i,ptr->data);
	return 0 ;
}
//function for inserting the element at required position
int insertion(){
	int x=0,y = 1,k = 1;
	ptr = head;
		nn = (struct node *)malloc(sizeof(struct node));
		printf("Enter the node data :");
		scanf("%d",&nn->data);
		nn->next = NULL;
	while(ptr->next!=head){
		ptr= ptr->next;
		y++;
	}
	int n;
	while(x==0){
		printf("\nEnter the position where you want to insert the data :");
		scanf("%d",&n);
		if(n<=y+1 && n>0){
			x++;
		}
		else{
			printf("Invalid position");
		}
	}
	if(n==1){
		ptr = head->next;
		while(ptr->next!=head){
			ptr = ptr->next;
		}
		nn->next = head;
		head = nn;
		ptr->next =  head;
		
	}else if(n==y+1){
		ptr = head->next;
		while(ptr->next != head){
			ptr = ptr->next;
		}
		ptr->next = nn;
		nn->next = head;	
	}else{
		ptr = head;
		for(k=1;k<n;k++){
			ptr = ptr->next;
		}
		nn->next = ptr->next;
		ptr->next = nn;
	}
	return 0;
}
// funtciton to delete the element from the list
int deletion(){
	int x=0,y = 1,k = 1;
	ptr = head->next;
	while(ptr!=head){
		ptr= ptr->next;
		y++;
	}
	int n;
	while(x==0){
		printf("\nEnter the position where you want to delete the data :");
		scanf("%d",&n);
		if(n<=y && n>0){
			x++;
		}
		else{
			printf("Invalid position");
		}
	}
	if(n==1){
		ptr = head->next;
		while(ptr->next!=head){
			ptr = ptr->next;
		}
		ptr->next = head->next;	
		ptr= head;
		head = head->next;
		free(ptr);
	}else if(n==y){
		ptr = head->next;
		while(ptr->next != head){
			qtr = ptr;
			ptr = ptr->next;
		}
		qtr->next = head;
		free(ptr);	
	}else{
		ptr = head;
		for(k=1;k<n;k++){
			qtr = ptr;
			ptr = ptr->next;
		}
		qtr->next = ptr->next;
		free(ptr);
	}
	return 0;
}
//function to get the element at required position
int searching(){
	int n,i;
	printf("Enter the position of the element :");
	scanf("%d",&n);
	ptr = head;
	for(i=1;i<n;i++){
		ptr=ptr->next;
	}
	printf("The element at position %d is %d",n,ptr->data);
	ptr = head;
	return 0;
}
