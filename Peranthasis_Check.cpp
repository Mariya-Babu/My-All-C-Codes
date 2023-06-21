#include<stdio.h>
#define N 100
int stack[N];
int top = -1;
//push
void push(char x){
    if(top==N-1){
        return;
    }
    stack[++top] = x;
    return;
}
//pop
char pop(){
    if(top==-1){
        return'0';
    }
    return stack[top--];
}
//check
int check(char x){
    if(x==')' && stack[top]=='('){
        return 1;
    }
    if(x==']' && stack[top]=='['){
        return 1;
    }
    if(x=='}' && stack[top]=='{'){
        return 1;
    }
    return 0;
}
//isValid
void isValid(char * s){
    int bol;
    char *e = s;
    while(*e!=NULL){
        if(*e=='('||*e=='{'||*e=='['){
            push(*e);
        }
        if(*e==')'||*e=='}'||*e==']'){
            bol = check(*e);
            if(bol!=1){
            	printf("\nFalse..");
                return;
            }
            else{
                pop();
            }
        }
        e++;
    }
    if(top!=-1){
    	printf("\nFalse..");
        return;
    }
    else{
    	printf("\nTrue..");
        return;
    }

}
//Main
int main(){
	char str[50];
	printf("Enter the string to ;check paranthasis : ");
	gets(str);
	isValid(str);
}
