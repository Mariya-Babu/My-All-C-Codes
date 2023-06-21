/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 3
       programme Number : 2
  programme Description : C Programme to implement stack using linked list 
 				   Date : 7/12/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header file's section
#include<stdio.h>
#include<stdlib.h>
//Structure Definition section
struct stack{
	int data;
	struct stack *next;
}*head=NULL,*ptr,*qtr,*nn,*top,*temp=NULL;
//Function declaration section
int push(void);
int pop(void);
int peek(void);
int display(void);
//Main function
int main(){
	while(1){
		int n;
		printf("\n1.push 2.pop 3.peek element 4.exit\n");
		printf("Enter your option :");
		scanf("%d",&n);
		switch(n){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid Syntax");
		}
		display();
	}
	return 0;
}
//Function to read the element's
int push(){
	int i=1;
	while(i){
		nn = (struct stack *)malloc(sizeof(struct stack));
		printf("Enter the data :");
		scanf("%d",&nn->data);
		nn->next = NULL;
		//top = nn;
		if(head==NULL){
			head = nn;
			top = nn;
		}else{
			ptr = top;
			top = nn;
			top->next = ptr;
		}
		printf("Press 0 to exit : ");
		scanf("%d",&i);
	}
	return 0;
}
//Function to pop the top element
int pop(){
	int item;
	item = top->data;
	temp = top;
	top = top->next;
	free(temp);
	printf("The poped item is %d\n",item);
	return item;
}
//Function to display the peek element
int peek(){
	printf("The peek element is %d\n ",top->data);
	return top->data;
}
//Function to dispay the element's in the stack
int display(){
	temp = top;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	return 0;
}
