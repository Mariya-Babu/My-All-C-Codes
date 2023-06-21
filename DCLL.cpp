//C Programme to perform the Doubly Circular Linked List
//Header Files
#include<stdio.h>
#include<stdlib.h>
//Struture Definition
struct node{
	int data;
	struct node *prev,*next;
}*head=NULL,*ptr,*qtr,*nn;
//Function Declaration
void creation();
void display();
void insertion();
void deletion();
//Main Function
int main(){
	int n;
	printf("Enter how many nodes you want to insert : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		creation();
	}
	display();
	for(int i=0;i<3;i++){
		insertion();
		display();
	}
	for(int i=0;i<3;i++){
		deletion();
		display();
	}
}
void creation(){
	nn=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert : ");
	scanf("%d",&nn->data);
	nn->prev = NULL;
	nn->next = NULL;
	if(head==NULL){
		head = nn;
		head->prev = nn;
		head->next = nn;
	}
	else{
		struct node *temp;
		temp = head->prev;
		nn->prev = temp;
		nn->next= head;
		head->prev = nn;
		temp->next = nn;
	}
	return;
}
//Display Function
void display(){
	struct node *temp;
	temp = head;
	do{
		printf("%d ",temp->data);
		temp = temp->next;
	}while(temp!=head);
	return;
}
//Insertion Function 
void insertion(){
	nn=(struct node*)malloc(sizeof(struct node));
	int pos,len=0;
	struct node *temp = head;
	do{
		len++;
		temp = temp->next;
	}while(temp!=head);
	printf("\nEnter the position where you want to insert the data : ");
	scanf("%d",&pos);
	printf("Enter the data : ");
	scanf("%d",&nn->data);
	nn->prev = NULL;
	nn->next = NULL;
	if(pos==1){
		temp = head->prev;
		nn->prev = temp;
		nn->next = head;
		head->prev = nn;
		temp->next = nn;
		head = nn;
	}
	else if(pos==len){
		temp = head->prev;
		nn->prev = temp;
		nn->next = head;
		head->prev = nn;
		temp->next = nn;
	}
	else if(pos>1 && pos<len){
		ptr = head;
		for(int i=1;i<pos;i++){
			ptr = ptr->next;
		}
		qtr = ptr->prev;
		nn->next = ptr;
		nn->prev = qtr;
		ptr->prev = nn;
		qtr->next = nn;
	}
	else{
		printf("Entered position is invalid...");
		printf("\n Please ReEnter..");
		insertion();
	}
	return;
}
//Deletion
void deletion(){
	struct node *temp=head;
	int pos,len=0;
	do{
		len++;
		temp=temp->next;
	}while(temp!=head);
	printf("Enter the position where you want to delete the data : ");
	scanf("%d",&pos);
	temp = head->prev;
	ptr = head;
	if(pos==1){
		temp->next = head->next;
		head = head->next;
		head->prev = temp;
		free(ptr);
	}
	else if(pos==len){
		ptr = temp;
		temp = temp->prev;
		temp->next = head;
		head->prev = temp;
		free(ptr);
	}
	else if(pos>1 && pos<len){
		ptr = head;
		for(int i=1;i<pos;i++){
			ptr = ptr->next;
		}      
		qtr = ptr->prev;
		qtr->next = ptr->next;
		ptr->next->prev = qtr;
		free(ptr);
	}
	else{
		printf("\n Entered position is invalid please enter correct position...");
		deletion();
	}
	return;
}


