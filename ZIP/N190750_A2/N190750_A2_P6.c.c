/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 2
       programme Number : 6
  programme Description : C Programme to sort the numbers given in a LL 
 				   Date : 6/28/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
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
		printf("\n1 create list   2 exit");
		printf("\nChoose your option :");
		scanf("%d",&n);
		if(n==1){
			read();
			printf("Data before sorting !\n");
			display();
			printf("Data  after sorting !\n");
			sorting();
			display();
		}
		else if(n==2){
			exit(1);
		}
		else{
			printf("invalid..");
		}
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
		printf("Enter 0 to exit :");
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
