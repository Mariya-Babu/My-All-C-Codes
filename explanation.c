#include<stdio.h>
#include<stdlib.h>
//Function declaration
int read(void);
int display(void);
int add(void);
int sub(void);
//Structure definition in the global declaration
struct poly{
	int coff1;
	int coff2;
	struct poly *next;
}*head=NULL,*ptr,*qtr,*nn;
//Main function 
int main(){
	int n,i = 1;
	while(i!=0){
		printf("Hello User!\n");
		printf("1 read polinomiyal \n2 add two polinomiyals \n3 subtract two polinomiyals \n4 exit");
		printf("\nChoose your option :");
		scanf("%d",&n);
		switch(n){
			case 1:
				read();
				display();
				break;
			case 2:
				add();
				break;
			case 3:
				sub();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid syntax!...");
		}
	}
}
//Function to read the cofficient of the polinomial's
int read(){
	int i=1,j=0;
	while(i!=0){
		nn = (struct poly *)malloc(sizeof(struct poly));
		printf("Enter  the fun1 x power %d cofficeint :",j);
		scanf("%d",&nn->coff1);
		printf("Enter  the fun2 x power %d cofficeint :",j);
		scanf("%d",&nn->coff2);
		j++;
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
		printf("0 to exit press any number for new coffercient");
		scanf("%d",&i);
	}
}
//Function to display the polinomial
int display(){
	ptr= head;
	int i = 0;
	printf("\nFirst polinomiyal :\n");
	while(ptr!=NULL){
		printf("+(%d)x^ %d ",ptr->coff1,i);
		ptr = ptr->next;
		i++;
	}
	 i= 0 ;
	ptr = head;
	printf("\nSecond polinomial :\n");
	while(ptr!=NULL){
		printf("+(%d)x^ %d ",ptr->coff2,i);
		ptr = ptr->next;
		i++;
	}
}
//Function to add the polinomial's
int add(){
	ptr = head;
	int i = 0 ;
	printf("\n The addtion of the two polinomiyal's is :\n'");
	while(ptr!=NULL){
		printf("+(%d)x^ %d ",ptr->coff1+ptr->coff2,i);
		ptr = ptr->next;
		i++;
	}
	return 0;	
}
//Function to subtraction the polinomial's
int sub(){
	ptr = head;
	int i = 0 ;
	printf("\n The addtion of the two polinomiyal's is :\n'");
	while(ptr!=NULL){
		printf("+(%d)x^ %d ",ptr->coff1-ptr->coff2,i);
		ptr = ptr->next;
		i++;
	}
	return 0;	
}
