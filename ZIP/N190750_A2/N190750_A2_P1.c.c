/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 2
       programme Number : 1
  programme Description : C Programme to creat a SLL and perfom all insertion and deletion cases 
 				   Date : 6/28/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
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
	printf("\n1 create list 2 insertation ");
	printf(" 3 deletion 4 searching 5 exit \n");
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
			nn->next = NULL;
		}
		else{
			ptr = head;
			while(ptr->next !=NULL){
				ptr = ptr->next;
			}
			ptr->next = nn;
			nn->next = NULL;
		}
		printf("Enter the 0 to exit :");
		scanf("%d",&i);
	}
	return 0;
}
// function to display the node element's
int display(){
	ptr = head;
	int i = 0;
	while(ptr!=NULL){
		printf("\nThe data at node %d is %d ",i,ptr->data);
		ptr = ptr->next;
		i++;
	}
	return 0 ;
}
//function for inserting the element at required position
int insertion(){
	int x=0,y = 0,k = 1;
	ptr = head;
		nn = (struct node *)malloc(sizeof(struct node));
		printf("Enter the node data :");
		scanf("%d",&nn->data);
		nn->next = NULL;
	while(ptr!=NULL){
		ptr= ptr->next;
		y++;
	}
	int n;
	while(x==0){
		printf("\nEnter the position where you want");
		printf(" to insert the data :");
		scanf("%d",&n);
		if(n<=y+1 && n>0){
			x++;
		}
		else{
			printf("Invalid position");
		}
	}
	if(n==1){
		nn->next = head;
		head = nn;
		
	}else if(n==y+1){
		ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = nn;
		
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
	int x=0,y = 0,k = 1;
	ptr = head;
	while(ptr!=NULL){
		ptr= ptr->next;
		y++;
	}
	int n;
	while(x==0){
		printf("\nEnter the position of the element  ");
		printf("Where you want the delete : ");
		scanf("%d",&n);
		if(n<=y && n>0){
			x++;
		}
		else{
			printf("Invalid position");
		}
	}
	if(n==1){
		ptr = head;
		head = ptr->next;
		free(ptr);	
	}else if(n==y){
		ptr = head;
		while(ptr->next != NULL){
			qtr = ptr;
			ptr = ptr->next;
		}
		qtr->next = NULL;
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
//Searching 
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
