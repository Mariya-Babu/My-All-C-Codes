#include<stdio.h>
#include<stdlib.h>
// function declaration 
int read(void);
int display(void);
int sorting(void);
//structure creation 
struct node{
	int data;
	struct node *next;
}*head= NULL,*p,*qtr,*r,*nn,*ptr;
// main function
int main(){
	while(1){
	int n;
	printf("1 create list  \n 2 exit");
	printf("\nChoose your option :");
	scanf("%d",&n);
/*	switch(n){
		case 1:
			read();
			break;
		case 2:
			exit(1);
			break;
		default:
			printf("Invalid Syntax");
	}*/
	read();
	printf("Data before sorting !\n");
	display();
	printf("Data  after sorting !\n");
	sorting();
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
		printf("Enter the 1 value to create new node :");
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
//Function to sort the element's
int sorting(){
	int temp = 0;
	ptr =head;
	while(ptr!=NULL){
		qtr =  ptr->next;
		while(qtr!=NULL){
			if(ptr->data > qtr->data){
				temp = ptr->data;
				ptr->data = qtr->data;
				qtr->data = temp;
			}
			qtr = qtr->next;
		}
		ptr= ptr->next;
	}
	return 0;
}
