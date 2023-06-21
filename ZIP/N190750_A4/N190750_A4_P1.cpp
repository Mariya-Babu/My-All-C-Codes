/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 4
       programme Number : 1
  programme Description : C Programme to implement queue using linked list 
 				   Date : 7/18/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
#include<stdio.h>
#include<stdlib.h>
//Structure definition
struct queue{
	int data;
	struct queue *next;
}*head=NULL,*tail=NULL,*nn,*ptr;
//Enqueue Operation 
int enqueue(){
	nn = (struct queue*) malloc (sizeof(struct queue));
	printf("Enter the node data :");
	scanf("%d",&nn->data);
	if(head==NULL && tail==NULL){
		head=tail=nn;
		nn->next = NULL;
	}
	else{
		tail->next=nn;
		tail=nn;
		nn->next = NULL;
	}
}
//Dqueue Function 
int dqueue(){
	int item = head->data;
	if(head==tail){
		head=tail=NULL;
		return item;
	}
	else{
		ptr = head;
		head=head->next;
		return item;
	}
	
}
//Display Function 
int display(){
	ptr = head;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
	return 0;
}
//Main Function
int main(){
	int opt;
	printf("Queue implimintation using linked list");
	while(1){
		printf("\n1.enqueue 2.dqueue 3.exit ");
		printf("\nEnter your option :");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				enqueue();
				break;
			case 2:
				dqueue();
				break;
			case 3:
				exit(1);
			default:
				printf("Invalid Option....");
		}
		display();
	}
	return 0;
}
