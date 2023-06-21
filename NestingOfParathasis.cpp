#include<stdio.h>
#define N 30
char stack[N];
int top = -1;
void push(char x){
    if(top==N){
        return;
    }
    stack[++top] = x ;
}
char pop(){
    if(top==-1){
        return '\0';
    }
    return stack[top--];
}
int check(char x,char y){
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
int isValid(char * s){
    int i=0,k;
    while(s[i]!='\0'){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            push(s[i]);
        }
        if(s[i]==')' || s[i]==']' || s[i]=='}'){
            char x = pop();
           k = check(x,s[i]);
            if(k!=1){
                //return 0;
                printf("Invalid paranthasis ");
            }
        }
        i++;
    }
    if(top!=-1){
        //return 0;
        printf("Invalid paranthasis ");
    }
    else{
    	printf("Valid paranthasis ");
	}
    return 1;
}
int main(){
	printf("Enter a string to check the paranthasis : ");
	char str[50];
	gets(str);
	isValid(str);
}
