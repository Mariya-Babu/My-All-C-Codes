/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 2
       programme Number : 7
  programme Description : C Programme to create LL which stores details of students 
  							and print the names of the students who got first class 
 				   Date : 6/28/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
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
		printf("Press 0 to exit :");
		scanf("%d",&i);
	}
	return 0;
}
// Function to display the student details
int display(){
	int i = 0;
	ptr = head;
	while(ptr!=NULL){
		printf("The student %d name is %s ",i,ptr->name);
		printf("and marks are %d \n",ptr->marks);
		ptr = ptr->next;
		i++;
	}
	return 0;
}
//Function to display the rank 
int rank(){
	int fc;
	printf("Enter the required mark to get first class :");
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
