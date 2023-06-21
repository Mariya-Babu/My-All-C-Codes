/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 7(BST)
       programme Number : 1
  programme Description : C Programme to create BST and Insertion,deletion,3 traversal
   				   Date : 8/23/2022
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Description:-BST Operation's   
//HeaderFiles section
#include<stdio.h>
#include<stdlib.h>
//Structure definition
struct node{
	int data;
	struct node *lst;
	struct node *rst;
};
//Insert the data into the node
struct node * insert(struct node *root){    
    int val; 
    printf("enter value of node :");
    scanf("%d",&val);
	struct node *nn,*node,*parent;
	nn=(struct node*)malloc(sizeof(struct node));
	nn->data=val;
	nn->lst=0;
	nn->rst=0;
	if(root==0){
		root=nn;
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
		   parent->lst=nn;
		else
		   parent->rst=nn;
	}
	return root;
}
//Inorder traversal for the BST
void inorder(struct node *root){  
        if(root!= NULL){  
            inorder(root->lst);  
            printf("%d ",root->data);  
            inorder(root->rst);  
        }  
}  
//Preorder traversal of the BST
void printPreorder(struct node* node){
    if (node == NULL)
    return;
    printf("%d ", node->data);
    printPreorder(node->lst);
    printPreorder(node->rst);
}
//Postorder traversal of the BST
void printPostorder(struct node* node){
    if (node == NULL)
        return;
    printPostorder(node->lst);
    printPostorder(node->rst);
    printf("%d ", node->data);
}
//Searching in the BST 
struct node* search(struct node* node,int key){   
    if(node==0 || node->data==key)
	   return node;
	else if(key>node->data)
	   return search(node->rst,key);
	else if(key<node->data)
     	return search(node->lst,key);
    printf("element not found");  
}
//Maximum element in the tree
struct node* max(struct node *node){
	if(node==0 || node->rst==0)
	   return node;
	else
	   return max(node->rst);
}
//Minimum element in the tree
struct node* min(struct node *node){
	if(node==0 || node->lst==0)
	   return node;
	else
	   return min(node->lst);
}
//Delete the data from the BST
 struct node *delete(struct node *root,int x){  
    struct node *temp;
 	if(root==0){   
	 printf("no data to delete");
 		return root;
	 }
	if(x<root->data){
		root->lst=delete(root->lst,x);
	}
	else if(x>root->data){
		root->rst=delete(root->rst,x);
	}
	else{
		if(root->lst==0){
			temp=root->rst;
			free(root);
			return temp;
		}
		else if(root->rst==0){
			temp=root->lst;
			free(root);
			return temp;
		}
		else if((root->lst==0 )&& (root->rst==0))
		     free(root);
		     temp=min(root->rst);
		     root->data=temp->data;
		     root->rst=delete(root->rst,temp->data);
			}
	return root;
 }
 //Main Function
int main(){ 
	int val,n,i=0,key,x;
	struct node *root=0,*mini,*maxi;
	printf("enter no. of nodes : ");
	scanf("%d",&n);
	while(i<n){
		root=insert(root);
		i++;
	}
	printf("\nInorder Traversal \n");
	inorder(root);
	printf("\nPreorder traversal \n");
	printPreorder(root);
	printf("\nPostorder traversal \n");
	printPostorder(root);
	mini=min(root);
	printf("\nsmallest element is %d\n",mini->data);
	maxi=max(root);
	printf("largest element is %d\n",maxi->data);
	printf("enter element to delete : ");
	scanf("%d",&x);
	delete(root,x);
	printf("\nInorder traversal After deletion \n");	
	inorder(root);
	return 0;
}
//
