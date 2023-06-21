//header files
#include<stdio.h>
#include<stdlib.h>
//function declaration
void creation();
void display();
//structure definition
struct node{
	int data;
	struct node *next;
}*start=NULL,*ptr,*temp;
//main function
int main(){
	int n;
	printf("Enter the number of node you want to create : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		creation();
	}	
	display();
}
//creation 
void creation(){
	struct node *nn;
	nn = (struct node*)malloc(sizeof(struct node));
	printf("Enter the node data : ");
	scanf("%d",&nn->data);
	nn->next =NULL;
	if(start==NULL){
		start = nn;
	}
	else{
		temp = start;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = nn;
	}
}
void display(){
	temp = start;
	while(temp!= NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
