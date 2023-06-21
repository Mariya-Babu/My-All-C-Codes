/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 4
       programme Number : 2
  programme Description : C Programme to implement queue using array  
 				   Date : 7/18/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
#include<stdio.h>
#include<stdlib.h>
#define N 20
//Queue definition
int queue[N];
int rare=-1,front=-1;
//Enqueue Function 
int enqueue(int x){
	if(front==-1 && rare==-1){
		front=rare=0;
		queue[rare] = x;
	}
	else if(rare==N-1){
		printf("Overflow..");
	}
	else{
		queue[++rare] = x;
	}
	return 0;
}
//Dqueue Function 
int dqueue(){
	int item = queue[front];
	if(front==-1 && rare==-1){
		printf("UnderFlow..");
		return -1;
	}
	else if(front==rare){
		front=rare=-1;
		return item;
	}else{
		front++;
		return item;
	}
	
}
//Display Function 
int display(){
	int i;
	for(i=front;i<=rare;i++){
		printf("%d\t",queue[i]);
	}
	return 0;
}
//Main Function
int main(){
	int opt,data;
	while(1){
		printf("\n1.enqueue 2.dequeue 3.exit \n");
		printf("Choose your option :");
		scanf("%d",&opt);
		if(opt==1){
			printf("Enter the data into the queue :");
			scanf("%d",&data);
			enqueue(data);
		}
		else if(opt==2){
			printf("The deleted element is %d \n",dqueue());
		}
		else if(opt==3){
			exit(1);
		}
		else{
			printf("Invalid...");
		}
		display();	
	}
}
