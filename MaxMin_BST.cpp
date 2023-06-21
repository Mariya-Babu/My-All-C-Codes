/* C Programme to find the maximum and minimum in the BST */
//Header Files Section 
#include<stdio.h>
#include<stdlib.h>
//Structure Definition 
struct node{
	int data;
	struct node *left,*right;
};
typedef struct node Node;
Node *head,*root=NULL,*nn,*ptr;
//Function Declaration
int creation();
int insertion();
Node* insert(Node*);
void inOrder(Node*);
void display();
int max(Node*);
int min(Node*);
//Function Definition section 
int main(){
	creation();
	display();
	int opt;
	while(1){
		printf("\n1.insertion  \n2.deletion  \n3.max \n4.min \n5.exit()  ");
		printf("Enter your option : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				insertion();
				break;
			case 2:
				//deletion();
				break;
			case 3:
				max(root);
				break;
			case 4:
				min(root);
				break;
			case 5:
				exit(1);
			default:
				printf("Invalid syntax ");
				
		}
		display();
	}
}
//Function to create the BST
int creation(){
	int n;
	printf("Enter the node of node's to insert into the BST : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		insertion();
	}
}
//Function to insert the node into the BST
int insertion(){
	nn = (Node*)malloc(sizeof(Node));
	printf("\nEnter the Node data : ");
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
//Function to insert the node at exact position
Node* insert(Node *temp){
	if(temp==NULL){
		return temp;
	}
	if(temp->data <= nn->data){
		if(temp->right==NULL){
			temp->right = nn;
		}
		else{
			insert(temp->right);
		}
	}
	else{
		if(temp->left==NULL){
			temp->left = nn;
		}
		else{
			insert(temp->left);
		}
	}
	return temp;
}
//Function to print the inOrder form of the BST
void inOrder(Node *temp){
	if(temp==NULL){
		return;
	}
	inOrder(temp->left);
	printf("%d ",temp->data);
	inOrder(temp->right);
	return;
}
//Function to display the Node data of the BST
void display(){
	inOrder(root);
}
//Function to print the maximum element in the given BST
int max(Node *temp){
	while(temp->right!=NULL){
		temp = temp->right;
	}
	printf("The max term in the BST is : %d\n",temp->data);
	return temp->data;
}
//Function to print the minimum element in the given BST
int min(Node *temp){
		while(temp->left!=NULL){
		temp = temp->left;
	}
	printf("The min term in the BST is : %d\n",temp->data);
	return temp->data;
}
