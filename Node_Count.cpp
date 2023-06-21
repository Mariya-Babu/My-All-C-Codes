/* C Programme to count the no.of nodes in a BST */
//Header Files section 
#include<stdio.h>
#include<stdlib.h>
//Structure Definition
struct node{
	int data;
	struct node *left,*right;
};
typedef struct node Node;
Node *ptr,*root=NULL,*head,*nn;
int count = 0;
//Function Definition
int creation();
int insertion();
int insert(Node*);
void display();
int node_count(Node*);
//Main Function 
int main(){
	creation();
	display();
	int opt;
	while(1){
		printf("\n1.insert  \n2.delete  \n3.count  \n.exit  \n");
		printf("Enter your option : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				insertion();
				break;
			case 2:
				//deletion();
				//break;
			case 3:
				count = 0;
				node_count(root);
				printf("The no.of node's are : %d ",count);
				break;
			case 4:
				exit(1);
			default:
				printf("   Invalid   ");
				
		}
		display();
	}
}
//Function to create the node 
int creation(){
	int n;
	printf("Enter no.of Nodes to insert in the BST : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		insertion();
	}
	return 0;
}
//Function to insert the data into the BST
int insertion(){
	nn = (Node*)malloc(sizeof(Node));
	printf("Enter the data you want to insert : ");
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
//Function to insert the data at the right position
int insert(Node *temp){
	if(temp->data >= nn->data){
		if(temp->left==NULL){
			temp->left = nn;
			return 0;
		}
		else{
			insert(temp->left);	
		}
	}
	else{
		if(temp->right==NULL){
			temp->right = nn;
			return 0;
		}
		else{
			insert(temp->right);			
		}
	}
	return 0;
}
//Function to print the inOrder of the BST 
void inOrder(Node *temp){
	if(temp==NULL){
		return ;
	}
	inOrder(temp->left);
	printf("%d\t",temp->data);
	inOrder(temp->right);
	return;
}
//Display function to print the Data of the BST 
void display(){
	inOrder(root);
}
//Function to count the no.of nodes in the BST 
int node_count(Node *temp){
	if(temp==NULL){
		return count;
	}
	node_count(temp->left);
	count++;
	node_count(temp->right);
	return count;
}
