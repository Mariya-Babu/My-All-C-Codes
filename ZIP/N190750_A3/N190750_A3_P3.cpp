/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 3
       programme Number : 3
  programme Description : C Programme to reverse the contents of stack 
 				   Date : 7/12/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
#include<stdlib.h>
#define N 20
//Stack definition 
int stack[N];
int top = -1;
//Function to push the element's into the stack
int push(int x){
	if(top==N-1){
		return 0;
	}
	stack[++top] = x;
}
//Function to pop the element from the stack
int pop(){
	if(top==-1){
		return 0;
	}
	return stack[top--];
}
//Function to display the stack content
int display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d  ",stack[i]);
	}
	return 0;
}
//Function to display the peek element
int peek(){
	printf("\n The peek element : %d\n",stack[top]);
}
//Queue definition
int queue[N];
int front=-1,rare=-1;
//Function to insert the data into the queue
int enqueue(int x){
	if(front==-1 && rare==-1){
		front=rare=0;
		queue[rare] = x;
	}
	else if((rare+1)%N==front){
		return 0;
	}
	else{
		rare = (rare+1)%N;
		queue[rare] = x;
	}
}
//Function to delete the element from the stack
int dqueue(){
	int item;
	if(front==-1 && rare==-1){
		return -1;
	}
	else if(front==rare){
		item = queue[front];
		front=rare=-1;
		return item;
	}
	else{
		item = queue[front];
		front = (front+1)%N;
		return item;
	}
}
//Function to reverse the stack
int stack_reversing(){
	while(top>=0){
		int x  = pop();
		enqueue(x);
	}
	while(rare!=-1){
		push(dqueue());
	}
}
//Main Function
int main(){
	int data;
	int opt;
	while(1){
		printf("\n1.push 2.pop 3.reverse stack");
		printf(" 4.peek 5.exit\n");
		printf("Choose your option :");
		scanf("%d",&opt);
		if(opt==1){
			printf("Enter the data :");
			scanf("%d",&data);
			push(data);
		}else if(opt==2){
			pop();
		}else if(opt==3){
			stack_reversing();
			
		}else if(opt==4){
			peek();
		}else if(opt==5){
			exit(1);
		}
		display();
	}
}
