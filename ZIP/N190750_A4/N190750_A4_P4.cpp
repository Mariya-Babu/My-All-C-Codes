/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 4
       programme Number : 4
  programme Description : C Programme to implement queue which permits insertion and deletion at both the ends 
 				   Date : 7/18/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files
#include<stdio.h>
#include<stdlib.h>
#define N 5
//Queue definition
int queue[N];
int front=-1,rare=-1;
//Enqueue from the front of the queue
int EnqueueFront(int x = 10){
	if(front==-1 && rare==-1){
		front=rare=0;
		queue[front] = x;
	}
	else if(front==0){
		if(rare==N-1){
			printf("OverFlow");
		}
		else{
			front=N-1;
			queue[front] = x;
		}
	}
	else {
		if(((front-1)%N)==rare){
			printf("OverFlow");
		}
		else{
			front = (front-1)%N;
			queue[front] = x;
		}
	}
}
//Enqueue from the rare of the queue
int EnqueueRare(int x = 5){
	if(front==-1 && rare==-1){
		rare = front = 0;
		queue[rare] = x;
	}
	else if((rare+1)%N==front){
		printf("Overflow..");
	}
	else{
		rare = (rare+1)%N;
		queue[rare] = x;
	}
	return 0;
}
//Dequeue the element from the front
int DequeueFront(){
	int item;
	item = queue[front];
	if(front==-1 && rare==-1){
		printf("Under Flow...");
	}
	else if(front==rare){
		printf("\nThe Dequeued item is : %d  ",item);
		front=rare=-1;
		return item;
	}
	else{
		front = (front+1)%N;
		printf("\nThe Dequeued item is %d : \n",item);
		return item;
	}
}
//Dequeue the element from the rare of the queue
int DequeueRare(){
	int item;
	item = queue[rare];
	if(front==-1 && rare==-1){
		printf("UnderFlow...");
	}
	else if(front==rare){
		front=rare=-1;
		printf("\nThe Dequeued item is %d : \n",item);
		return item;
		
	}
	else if(rare==0){
		rare = N-1;
		printf("\nThe Dequeued item is %d : \n",item);
		return item;
	}
	else{
		rare = (rare-1)%N;
		printf("\nThe Dequeued item is %d : \n",item);
		return item;
	}
	
}
//Display the content of the queue
int display(){
	int i;
	i = front;
	while(i!=rare){
		printf("%d\t",queue[i]);
		i = (i+1)%N;
	}
	printf("%d\t",queue[i]);
	return 0;
}
//Main Function
int main(){
	int opt,data;
	printf("Double Ended queue data structure ");
	while(1){
		printf("\n1.EnqueueFront 2.EnqueueRare ");
		printf(" 3.DequeueFront 4.DequeueRare 5.exit \n");
		printf("Enter your option :");
		scanf("%d",&opt);
		if(opt==1){
			printf("Enter data to insert from  front of the queue :");
			scanf("%d",&data);
			EnqueueFront(data);
		}
		else if(opt==2){
			printf("Enter data to insert from rare of the queue :");
			scanf("%d",&data);
			EnqueueRare(data);
		}
		else{
			switch(opt){
				case 3:
					DequeueFront();
					break;
				case 4:
					DequeueRare();
					break;
				case 5:
					exit(1);
				default:
					printf("Invalid option...");
						
			}
		}
		display();
	}
}
