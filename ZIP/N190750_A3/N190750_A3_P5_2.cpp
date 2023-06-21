/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 3
       programme Number : 5_2
  programme Description : C Programme to convert infix to prefix 
 				   Date : 7/12/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Headerfile's section
#include<stdio.h>
#include<ctype.h>
#include<string.h>
//Definition section
# define N 20
//stack declaration
char stack[N];
int top = -1;
//Function to push the element
int push(char op){
	stack[++top] = op;
}
//Function to pop the element
char pop(){
	if(top==-1){
		return -1;
	}
	return stack[top--];
}
//Functio for presidence
int prec(char op){
	if(op==')'){
		return 0;
	}
	if(op=='+'||op=='-'){
		return 1;
	}
	if(op=='*'||op=='/'){
		return 2;
	}
	if(op=='^'){
		return 3;
	}
	return 0;
}
//Function to to preform infix to postfix
char* Infix_To_Prefix(char *exp){
	int k=0;
	static char postfix[50];
	char *e;
	e = exp;
	while(*e!=NULL){
		if(isalnum(*e)){
			postfix[k++] = *e;
		}
		else if(*e==')'){
			push(*e);
		}
		else if(*e=='('){
			while(stack[top]!=')'){
				postfix[k++] = pop();
			}
			pop();
		}
		else{
			 while(prec(stack[top]) > prec(*e))
                postfix[k++] = pop();
            push(*e);
		}
		e++;
	}
	while(top!=-1){
		postfix[k++] = pop();
	}
	//printf("\nThe postfix exp is %s ",postfix);
	return postfix;
}
//Mani function
int main(){	
	char exp[50],*prefix;
	printf("Enter the infix expression :");
	gets(exp);	
	prefix = Infix_To_Prefix(strrev(exp));
	prefix = strrev(prefix);
	printf("\nThe prefix expression is : \n%s",prefix);
}

