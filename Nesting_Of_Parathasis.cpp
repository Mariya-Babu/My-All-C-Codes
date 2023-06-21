#include<stdio.h>
#define N 50
char stack[N];
int top=-1;
//Function to push the into the stack
int push(char x){
	if(top==N-1){
		return 0;
	}
	stack[++top] = x;
}
//Function to pop the element from the stack
char pop(){
	if(top==-1){
		return '\0';
	}
	return stack[top--];
}
//Function to matching pranthasis
int match(char x, char y){
	if(x=='(' && y==')'){
		return 1;
	}
	if(x=='[' && y==']'){
		return 1;
	}
	if(x=='{' && y=='}'){
		return 1;
	}
	return 0;
	
}
//Function to check the paranthasis
int check_paranthasis(char *exp){
	char *e;
	e = exp;
	//printf("Hi");
	while(*e!=NULL){
		printf("Hi\n");
		if(*e=='(' || *e=='{' || *e=='['){
			printf("Push function is successful...");
			push(*e);
		}
		else if(*e==')' || *e=='}' || *e==']'){
			if(top==-1){
				printf("Right paranthasis are more than left");
			}
			else{
				if(match(stack[top],*e)!=1){
					printf("Paranthasis mismathch...");
				}else{
					printf("valid string...");
				}
			}
		}
		e++;
	}
	if(top!=-1){
		printf("left parathasis are more than left");
	}
}
//Main Function
int main(){
	char exp[50];
	int valid;
	printf("Enter the valid expression : ");
	scanf("%d",exp);
	//valid = check_paranthasis(exp);
	check_paranthasis(exp);
}
