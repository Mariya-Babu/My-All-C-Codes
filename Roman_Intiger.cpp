/* C Programme to convert Roman number to integer */
#include<stdio.h>
//Function definition section
void push(int);
int pop();
int precd(char);
int RomanToInteger(char*);
//Definition of the Roman numbers
const int I = 1 ;
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
//Definition of the stack
#define N 20
int stack[N];
int top = 0;
//Main function
int main(){
	char str[50];
	stack[top] = 10000 ; 
	printf("Enter the roman number : ");
	scanf("%s",str);
	printf("%s",str);
	RomanToInteger(str);
}
//Function to convert the given roman number into the Integer form 
int RomanToInteger(char str[]){
	int sum = 0,y,i=0,a;
	while(str[i]!=NULL){
		a = V;
		printf("\n%d",a);
		if(stack[top]>=a){
			//printf("The given roman number is %c ",str[i]);
			push(a);
		}
		else{
			int x = pop();
			push(a-x);
		}
		i++;
	}
	while(top!=0){
		y = pop();
		sum += y; 
	}
	printf("\nThe integer value of the given roman number is %d ",sum);
}
//push function to insert the data into the stack
void push(int x){
	if(top==N){
		printf("  OverFlow ");
		return;
	}
	stack[top++] = x;
	return;
}
//pop function to delete the data from the stack
int pop(){
	if(top==0){
		printf("  UnderFlow  ");
		return -1;
	}
	return stack[top--];
}
