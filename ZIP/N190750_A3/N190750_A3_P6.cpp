/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 3
       programme Number : 6
  programme Description : C Programme to evaluate a postfix and prefix expressions 
 				   Date : 7/12/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define n 50
//Stack definition
int stack[n];
int top = -1,b;
//Function to push the element's into the stack
int push(int x){
	stack[++top] = x;
}
//Function to pop the element's from the stack
int pop(){
	if(top==-1){
		return -1;
	}
	return stack[top--];
}
//Function to evulate the postfix expression
int Postfix_Evaluation(char *exp){
	int num,n1,n2,n3;
	char *e;
	e = exp;
	while(*e!=NULL){
		if(isdigit(*e)){
			num = *e-48;
		//	printf("%d",num);
			push(num);
		}
		else{
			if(b==2){
			n2 = pop();
			n1 = pop();	
			}
			else{				
			n1 = pop();
			n2 = pop();
			}
			switch(*e){
				case '+':
					n3 = n1+n2;
					break;
				case '-':
					n3 = n2 - n1;
					break;
				case '*':
					n3 = n2 * n1;
					break;
				case '/':
					n3 = n2/n1;
					break;
				case '^':
					n3 = n1^n2;
					break;
			}
			push(n3);
		}
		e++;
	}
	int x = pop();
	return x;
}
//Main Function
int main(){
	char exp[50];
	int result=1;
	printf("Enter 1.postfix expression 2.prefix expression\n");
	scanf("%d",&b);
	if(b==1){
		printf("Enter the postfix expression :");
		scanf("%s",exp);
		result = Postfix_Evaluation(exp);
	}
	else if(b==2){
		printf("Enter the prefix expression :");
		scanf("%s",exp);
		result = Postfix_Evaluation(strrev(exp));
	}
	printf("The result of the expression is %d",result);
}
