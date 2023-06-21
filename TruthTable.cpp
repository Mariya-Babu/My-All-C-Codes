#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
//Stack to implement the  Postfix_Evaluation
int stack2[20];
int top2 = -1;

void push2(int x)
{
    stack2[++top2] = x;
}

int pop2()
{
    return stack2[top2--];
}
//Function to evalutae the postfix expression
int evluate_postfix(char *postfix,int val[])
{
    char *e;
    int n1,n2,n3,num;
    e = postfix;
    while(*e != '\0')
    {
        if(isalnum(*e))
        {
        	num = val[*e-'A'];
            push2(num);
        }
        else
        {
        	if(*e=='\''){
        		n1 = pop2();
        		n3 = !n1;
        		//push2(n)
			}
			else{
	            n1 = pop2();
	            n2 = pop2();
	            switch(*e)
	            {
		            case '+':
							n3 = n1 || n2;
		                	break;
		            case '.':
		                	n3 = n1 && n2;
		                	break;
	            }
       		}
   			push2(n3);
    }
        e++;
    }
    int z = pop2();
   // printf("\nThe result of expression %s  =  %d\n\n",exp,pop2());
    //return stack2[top2];
    return z;
}
//Char stack to convert the infix expression to postfix expression
int k = 0;
char stack1[100];
int top1 = -1;

void push1(char x)
{
    stack1[++top1] = x;
}

char pop1()
{
    if(top1 == -1)
        return -1;
    else
        return stack1[top1--];
}
//Function for presidence of the operator
int priority(char x)
{
	
    if(x == '(')
        return 0;
    if(x == '+')
        return 1;
    if(x == '.')
        return 2;
     if(x == '\'')
        return 3;
    return 0;
}
//Function to convert the infix expression to postfix expression
char* Infix_To_Postfix(char *exp)
{
	char *e, x;
    e = exp;
    static char postfix[50];
    while(*e != '\0')
    {
        if(isalnum(*e)){
        	postfix[k++] = *e;
        	//printf("%c ",*e);
		}
        else if(*e == '('){
        	//postfix[k++] = push1(*e);
        	push1(*e);
		}
        else if(*e == ')')
        {
            while((x = pop1()) != '(')
            	postfix[k++] = x;
                //printf("%c ", x);
        }
        else
        {
            while(priority(stack1[top1]) >= priority(*e)){
            	postfix[k++] = stack1[top1];
            	pop1();
            	//printf("%c ",pop1());
			}
            push1(*e);
        }
        e++;
    }
    
    while(top1 != -1)
    {
       // printf("%c ",pop1());
       postfix[k++] = stack1[top1];
       pop1();
    }return postfix;
}	
//Function to increment the truth table
int increment(char *var,int val[],int len){
	int carry = 1;
	for (int i = len - 1; i >= 0; --i) {
		if (val[var[i] - 'A'] == 1 && carry == 1) {
			val[var[i] - 'A'] = 0;
		}
		else if (carry == 1) {
			val[var[i] - 'A'] = 1;
			carry = 0;
		}
	}
}
//Function for the truth table
void 	print_truth_table(char *s){
	int i,len,k=0;
	char var[50] , *postfix;
    int val[26],n;
	for(i=0;i<26;i++){
		val[i] = -1;
	}
	//for loop for get and store the number of variable's
	len = strlen(s);
	for(i=0;i<=len;i++){
		if(s[i]>='A' && s[i]<='Z' && val[s[i]-'A']==-1){
			val[s[i]-'A']=0;
		    var[k++] = s[i];
		}
	}
	postfix = Infix_To_Postfix(s);
//	printf("The postfix is %s",postfix);
	n = strlen(var);
//	printf("The ")
	printf("\nTRUTH TABLE FOR INPUT 
		int z = evluate_postfix(postfix, val);
		printf("%d ",z);
		printf("\n");
		increment(var, val,n);
BOOLEAN EXPRESSION\n");
	
	for (int i = 0; i < n; ++i) {
		printf("-------------");
	}
	printf("\n");
	
	for (int i = 0; i < n; ++i) {
		printf("%c          ",var[i]);
	}
	printf("f\n");
	
	for (int i = 0; i < pow(2, n); ++i) {

		for (int i = 0; i < n; ++i) {
			printf("%d          ",val[var[i]-'A']);
		}
	}
}
//Main function
int main(){
	int i = 1;
	while(1){
		char s[50];
		printf("OR = '+' , AND = '.' , NOT = '\n");
		printf("Enter boolean expression :");
		scanf("%s",s);
		print_truth_table(s);
		printf("Press 0 for Exit:");
		scanf("%d",&i);
		if(i==0){
			break;
		}
	}

}
