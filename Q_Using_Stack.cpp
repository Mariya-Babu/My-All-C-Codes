//Queue implementation using double stack's 
//header files section
#include<stdio.h>
#include<stdlib.h>
//constant's value's section
#define N1 20
#define N2 20
#define S 20
//function section
int push1(int);
int push2(int);
int pop1();
int pop2();
int Enqueue(int);
int Dequeue();
int display();
//stack definition section
int stack1[N1];
int stack2[N2];
int top1 = -1;
int top2 = -1;
//Main function
int main(){
	while(1){
		int opt;
		printf("\n1.Enqueue \n2.Dequeue \n3.exit\n");
		printf("Eenter your option :");
		scanf("%d",&opt);
		if(opt==1){
			int data;
			printf("Enter the data :");
			scanf("%d",&data);
			Enqueue(data);
		}
		else if(opt==2){
			Dequeue();
		}
		else if(opt==3){
			exit(1);
		}
		else{
			printf("Invalid Option...");
		}
		display();
	}
}
//push functions
int push1(int x){
	if(top1==N1-1){
		printf("queue is full");
	}
	else{
		stack1[++top1] = x;
	}
}
int push2(int x){
	stack2[++top2] = x;
}
//pop function
int pop1(){
	if(top1==-1){
		return -1;
	}
	return stack1[top1--];
}
int pop2(){
	if(top2==-1){
		return -1;
	}
	return stack2[top2--];
}
//Function to implement the enqueue operation 
int Enqueue(int x){
	push1(x);
}
//Function to implement the dequeue operation
int Dequeue(){
	while(top1!=-1){
		push2(pop1());
	}
	printf("The Dequeued element is %d \n",pop2());
	while(top2!=-1){
		push1(pop2());
	}
}
//Function to display the queue element's
int display(){
	int i;
	for(i=top1;i>=0;i--){
		printf("%d\t",stack1[i]);
	}
}
