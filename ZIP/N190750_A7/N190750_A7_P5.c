/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 7(BST)
  programme Description : 5
  programme Description : C Programme to find all the elements of Nth level  
 				   Date : 8/23/2022
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//HeaderFiles section
#include <stdio.h>
#include <stdlib.h>
//Structure Definition 
struct btnode{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1; 
//Function Declaration section 
void insert();
void inorder(struct btnode *t);
void create();
void level(struct btnode *t,int plevel,int l);
void search(struct btnode *t);
//Main Function 
void main(){
    int i,x,l;
	printf("Enter the level number:");
	scanf("%d",&l);
    printf("Enter the number of nodes:");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
    	insert();
    }
    level(root,0,l);
}
// Function to insert the data into the BST 
void insert(){
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
} 
/* To create a node */
void create(){
    int data;
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
} 
//Approative position to insert the node 
void search(struct btnode *t){
    if ((temp->value > t->value) && (t->r != NULL)) 
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}
void level(struct btnode *t,int plevel,int l){
	if(t==NULL){
		return;
	}
	if(plevel==l){
		printf("%d ",t->value);
		return;
	}
	level(t->l,plevel+1, l);
	level(t->r,plevel+1,l);
}
