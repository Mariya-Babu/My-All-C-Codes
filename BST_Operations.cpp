/*  C Programme to implement the Binary Search Tree Operation's */
//Header Files Section
#include<stdio.h>
#include<stdlib.h>
//Function definition section
int creation();
int insertion();
int insert(struct node*);
int infix(struct node*);
int prefix(struct node*);
int postfix(struct node*);
int deletion();
void display();
struct node* checking(struct node*,int);
struct node* extract_max(struct node*);
//Structure definition
struct node{
	int data;
	struct node *left,*right;
}*root=NULL,*nn,*head,*temp;
//Main function
int main(){	
	creation();
	display();
	printf("\n");
	printf("1.insertion \n2.deletion \n3.exit");
	int opt;
	while(1){
		printf("\nEnter your option :");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;
			case 3:
				exit(1);
			default:
				printf("Invalid Syntax");
				
		}
		display();
		printf("\n");
	}
}
//Function to  insert the data into the BST
int insertion(){
	nn = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data to insert in the BST :");
	scanf("%d",&nn->data);
	nn->left = NULL;
	nn->right = NULL;
	if(root==NULL){
		root = nn;
	}
	else{
		insert(root);
	}
}
//Function to insert the given data in the correct position
int insert(struct node *ptr){
	 if(ptr->data >= nn->data){
	 	if(ptr->left==NULL){
	 		ptr->left = nn;
	 		return 0;
		 }
		 else{
		 	insert(ptr->left);
		 }
	 }
	 else{
	 	if(ptr->right==NULL){
	 		ptr->right = nn;
	 		return 0;
		 }
		 else{
		 	insert(ptr->right);
		 }
	 }
}
//Fucnction to creat the tree
int creation(){
	int n;
	printf("Enter the no.of Nodes to insert in the BST :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		insertion();
	}
}
//Function to display the BST 
void display(){
	printf("Prefix  : ");
	prefix(root);
	printf("\n");
	printf("Infix   : ");
	infix(root);
	printf("\n");
	printf("Postfix : ");
	postfix(root);
}
//Function to print the node data in InfixOrder
int infix(struct node *temp){
	if(temp==NULL){
		return 0;
	}
	infix(temp->left);
	printf("%d\t",temp->data);
	infix(temp->right);
	return 0;
}
//Function to print the node data in PrifixOrder
int prefix(struct node *temp){
	if(temp==NULL){
		return 0;
	}
	printf("%d\t",temp->data);
	prefix(temp->left);
	prefix(temp->right);
	return 0;
}
//Function to print the node data in PostFixOrder
int postfix(struct node *temp){
	if(temp==NULL){
		return 0;
	}
	postfix(temp->left);
	postfix(temp->right);
	printf("%d\t",temp->data);
	return 0;
}
//Function to delete the node from the BST
int deletion(){
	struct node *ptr,*temp,*qtr;
	int data;
	printf("Enter the data you want the delete : ");
	scanf("%d",&data);
	ptr = checking(root,data);
	//printf("The data you want delete is %d ",ptr->data);
	if(ptr==NULL){
		printf("Your entered data is not in the BST ");
	}
	if(ptr->left==NULL && ptr->right==NULL){
		free(ptr);
	}
	else if(ptr->left!=NULL && ptr->right!=NULL){
		qtr = extract_max(ptr->left);
		ptr->data = qtr->right->data;
		free(qtr->right);
		qtr->right = NULL;
	}
	else{
		if(ptr->left!=NULL){
			ptr = ptr->left;
		}
		else{
			ptr = ptr->right;
		}
	}
} 
//Functio to check the element is present in the node or not 
struct node* checking(struct node *temp, int data){
	if(temp==NULL){
		return temp;
	}
	else if(temp->data==data){
		return temp;
	}
	else if(temp->data < data){
		checking(temp->right,data);
	}
	else {
		checking(temp->left,data);
	}
}
//Extract the leftside maximum element from the BST 
struct node* extract_max(struct node *temp1){
	struct node* temp2;
	while(temp1->right!=NULL){
		temp2 = temp1;
		temp1 = temp1->right;
	}
	return temp2;
}
