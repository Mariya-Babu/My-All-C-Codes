/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 7(BST)
  programme Description : 2
  programme Description :C Programme to count the number nodes of a BST  
 				   Date : 8/23/2022
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//
//HeaderFiles section
#include<stdio.h>
#include<stdlib.h>
//Structure Definition 
struct node{
	int data;
	struct node *lst;
	struct node *rst;
};
//Function to insert the data into the BST 
struct node * insert(struct node *root){    
    int val; 
    printf("enter value of node :");
    scanf("%d",&val);
	struct node *newnode,*node,*parent;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->lst=0;
	newnode->rst=0;
	if(root==0){
		root=newnode;
		root->lst=0;
		root->rst=0;
	}
	else{
		parent=0;
		node=root;
		while(node!=0){
			parent=node;
			if(val<node->data)
			     node=node->lst;
			else
			     node=node->rst;
		}
		if(val<parent->data)
		   parent->lst=newnode;
		else
		   parent->rst=newnode;
	}
	return root;
}
//Function to find the total no.of nodes in the BST
int totalnodes(struct node *root){
	if(root==0)
	  return 0;
	else
	 return(totalnodes(root->lst)+totalnodes(root->rst)+1);
}
//Main Function 
int main(){ 
	int val,n,i=0,choice=1;
	struct node *root=0;
	while(choice){
		root=insert(root);
		i++;
		printf("enter 0 to stop :");
		scanf("%d",&choice);
	}
	printf("total no. of nodes %d",totalnodes(root));
	return 0;
} 
