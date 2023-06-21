/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 7(BST)
  programme Description : 3
  programme Description : C Programme to find the nth node in the inOrder traversal of a BST 
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
//Function to print the inorder traversal of the BST
void inorder(struct node *root){  
        if(root!= NULL){  
            inorder(root->lst);  
            printf("%d ",root->data);  
            inorder(root->rst);  
        }  
}  
//Function to find the nth node in the inOrder   
void nthinorder(struct node *root,int pos){
	    static int count=0;
        if(root== NULL) 
			return;
		if(count<=pos){
			nthinorder(root->lst,pos);
			count++;
		    	if(count==pos)
				printf("%d",root->data); 
        	nthinorder(root->rst,pos);
		      
        }  
} 
//Main Function 
int main(){ 
	int val,n,i=0,pos;
	struct node *root=0,*mini,*maxi;
	printf("enter no. of nodes");
	scanf("%d",&n);
	while(i<n){
	    root=insert(root);
	    i++;
	}
		printf("\nInorder traversal of binary tree is \n");
		inorder(root);
	    printf("\nenter position:");
	    scanf("%d",&pos);
		printf("\n%d th node in Inorder traversal of binary tree is \n",pos);
		nthinorder(root,pos);
		return 0;
}
