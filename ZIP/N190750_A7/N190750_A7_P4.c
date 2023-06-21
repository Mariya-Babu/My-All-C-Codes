/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 7(BST)
  programme Description : 4
  programme Description : C Programme to find the largest and smallest elements of a BST  
 				   Date : 8/23/2022
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
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
		while(node!=0)
		{
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
//Function to find the maximum element in the BST 
struct node* max(struct node *node){
	if(node==0 || node->rst==0)
	   return node;
	else
	   return max(node->rst);
}
//Function to find the minimum element in the BST 
struct node* min(struct node *node){
	if(node==0 || node->lst==0)
	   return node;
	else
	   return min(node->lst);
}
//Main Funcion 
int main(){ 
 int val,n,i=0,key,x;
 struct node *root=0,*mini,*maxi;
	 printf("enter no. of nodes");
	 scanf("%d",&n);
 while(i<n){
     root=insert(root);
     i++;
	}
	mini=min(root);
	printf("smallest element is %d\n",mini->data);
	maxi=max(root);
	printf("largest element is %d",maxi->data);
}
