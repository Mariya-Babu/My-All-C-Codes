/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 7(BST)
  programme Description : 6
  programme Description : C Programme to find nodes which are At max distance from the root node in the BST  
 				   Date : 8/23/2022
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//HeaderFiles section
#include <stdio.h>
#include <stdlib.h>
//Structure definition 
struct btnode{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1; 
//Function definition section 
void insert();
void create();
void search(struct btnode *t);
void max(struct btnode *t);
int c=0,m=0,v[50],j=0,a[50],ma;
//main Function 
void main(){
    int i,x;;
    printf("Enter the number of nodes:");
    scanf("%d",&x);
    for(i=0;i<x;i++){
    	insert();
    }
    m=0;c=0;
    max(root);
    for(i=0;i<j;i++){
    	ma=a[0];
    	if(ma<a[i])
           ma=a[i];
	}
	printf("Maximum distance node:");
	for(i=0;i<j;i++){
		if(ma==a[i])
		  printf("%d ,%d ",v[i],ma);
	}
}
//Insertion  
void insert(){
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
} 
//Node Creation 
void create(){
    int data;
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
} 
//The exact position to  insert the  node 
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
//Max Value in the BST 
void max(struct btnode *t){
	if(t->l!=NULL){
		c++;
		max(t->l);
	}
	if(m<c)
	  m=c;
	if(m==c){
		a[j]=m;
		v[j]=t->value;
		j++;
	}
	if(t->r!=NULL){
		c++;
		max(t->r);
	}
	c--;
}
