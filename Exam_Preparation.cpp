#include<stdio.h>
#include<stdlib.h>
//Struct definition
struct node{
	int data;
	struct node * next;
}*head=NULL,*ptr,*nn,*qtr,*tail;
//Function definition section section
int creation(void);
int display(void);
int insertion(void);
int deletion(void);
int searching(void);
int main(){
	while(1){
		int n;
		printf("1 create list \n 2 insertation \n 3 deletion \n 4 searching \n 5 exit");
		printf("\nChoose your option :");
		scanf("%d",&n);
		switch(n){
			case 1:
				creation();
				break;
			case 2:
				insertion();
				break;
			case 3:
				deletion();
				break;
			case 4:
				searching();
				break;
			case 5:
				exit(1);
				break;
			default:
				printf("Invalid Syntax");
		}
		display();
	}
}
//Function to creat the node
int creation()
{
	struct node *temp;
	int i=1;
	while(i==1){
		nn = (struct node *)malloc(sizeof(struct node));
		printf("Enter the node data :");
		nn->next = NULL;
		tail = nn;
		scanf("%d",&nn->data);
		if(head==NULL){
			head = nn;
			temp = nn;
		}
		else{
			temp->next = nn;
			temp = nn;
		}
		printf("Enter 1 to creat new node :");
		scanf("%d",&i);
	}
}
//Function to display the content of the node
int display(){
	struct node *temp;
	temp = head;
	while(temp!=NULL){
		printf("\nThe data is : %d",temp->data);
		temp = temp->next;
	}
	return 0;
}
//Function to insert the element at the specified position
int insertion(){
	struct node *temp;
	int x=0,y = 0,k = 1;
	ptr = head;
	nn = (struct node *)malloc(sizeof(struct node));
	printf("Enter the node data :");
	scanf("%d",&nn->data);
	nn->next = NULL;
	// While loop to count the number of the nodes...
	while(ptr!=NULL){
		ptr= ptr->next;
		y++;
	}
	int n;
	while(x==0){
		printf("\nEnter the position where you want to insert the data :");
		scanf("%d",&n);
		if(n<=y+1 && n>0){
			x++;
		}
		else{
			printf("Invalid position");
		}
	}
	if(n==1){
		nn->next = head;
		head = nn;
	}
	else if(n==y+1){
		tail->next = nn;
		tail = nn;
	}
	else{
		temp = head;
		for(k=1;k<n-1;k++){
			temp = temp->next;
		}
		nn->next = temp->next;
		temp->next = nn;
	}
}
//Function to delete the element at the specified postion
int deletion(){
	struct node *temp;
	int x=0,y = 0,k = 1;
	ptr = head;
	nn = (struct node *)malloc(sizeof(struct node));
	// While loop to count the number of the nodes...
	while(ptr!=NULL){
		ptr= ptr->next;
		y++;
	}
	int n;
	while(x==0){
		printf("\nEnter the position where you want to insert the data :");
		scanf("%d",&n);
		if(n<=y && n>0){
			x++;
		}
		else{
			printf("Invalid position");
		}
	}
	if(n==1){
		
	}	
}
//Function to search the element at the specified position
int searching(){
	printf("searching is completed!..");
}
