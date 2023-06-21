#include<stdio.h>
#include<stdlib.h>
//Function declaration
int read(void);
int display(void);
int rank(void);
//structur declaration
struct student{
	char name[50];
	int marks;
	struct student *next;
}*head=NULL,*nn,*ptr,*qtr;
//main function
int main(){
	printf("Hello World!\n");
	read();
	display();
	rank();
}
//Function to read the student details
int read(){
	int i=1;
	printf("Enter the student detalis :\n");
	while(i==1){
		nn = (struct student *)malloc(sizeof(struct student));
		printf("Enter the student name :");
		scanf("%s",nn->name);
		printf("Enter the student marks :");
		scanf("%d",&nn->marks);
		if(head==NULL){
			head = nn;
			nn->next = NULL;
		}else{
			ptr = head;
			while(ptr->next!=NULL){
				ptr = ptr->next;
			}
			ptr->next = nn;
			nn->next = NULL;
		}
		printf("Press 1 to enter the student details:");
		scanf("%d",&i);
	}
	return 0;
}
// Function to display the student details
int display(){
	int i = 0;
	ptr = head;
	while(ptr!=NULL){
		printf("The student %d name is %s and marks are %d \n",i,ptr->name,ptr->marks);
		ptr = ptr->next;
		i++;
	}
	return 0;
}
//Function to display the rank 
int rank(){
	int fc;
	printf("Enter the rquired mark :");
	scanf("%d",&fc);
	ptr = head;
	while(ptr!=NULL){
		if(ptr->marks>=fc){
			printf("%s got the first class \n",ptr->name);
		}
		ptr = ptr->next;
	}
	return 0;
}
