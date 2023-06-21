/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 3
       programme Number : 1
  programme Description : C Programme to perform push,pop and peek operations on a stack using arrays 
 				   Date : 7/12/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header file's section
#include<stdio.h>
#include<stdlib.h>
//Global declaration
#define N 20
int Stack[N];
int top = -1;
//Function declaration section
int push(void);
int pop(void);
int peek(void);
int display(void);
//Main function
int main(){
	while(1){
		int n;
		printf("\n1push 2pop 3peek element 4exit\n");
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
}
//Function to read the element's
int push(){
	int i=1;
	while(i !=0){
		if(top==N-1){
			printf("Over Flow");
		}else{
			int n;
			top++;
			printf("Enter the element :");
			scanf("%d",&n);
			Stack[top] = n;
		}
		printf("Press any key to continue 0 to exit");
		scanf("%d",&i);
	}
	return 0;
}
//Function to pop the top element
int pop(){
	if(top==-1){
		printf("Under Flow");
	}else{
		int item;
		item = Stack[top];
		printf("The poped item is %d\n",item);
		top--;
	}
	return 0;
}
//Function to display the peek element
int peek(){
	printf("The peek element is %d\n",Stack[top]);
}
//Function to display the element's
int display(){
	int i;
	if(top== -1){
		printf("Under Flow\n");
	}else{
		for(i=0;i<=top;i++){
			printf("%d ",Stack[i]);
		}
		printf("\n");
	}
	return 0;
}
