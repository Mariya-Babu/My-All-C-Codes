//C programme to perform the Graph Operation's 
#include<stdio.h>
#define N 100
int stack[N];
int top = -1;
//Function Declaration
int pop();
void push(int);
//Main 
int main(){
	int n;
	printf("Enter no.of vertices in the graph : ");
	scanf("%d",&n);
	int m[n][n];
	printf("If edge is present is at two nodes enter 1 otherwise 0 \n");
	for(int i=1;i<=n;i++){
		printf("Enter %d node adjecent nodes ",i);
		for(int j=1;j<=n;j++){
			printf("Enter node between %d and %d : ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	//DFS
	for(int i=1;i<=n;i++){
		int	count = 0;
		int x = 1;
		for(int j=1;j<=n;j++){
			if(m[x][j]==1){
				if(count ==0){
					printf("%d ",i);
				}
				push(j);
				m[x][j] = -1;
				count++;
			}
		}
		x = pop();
	}
	return 0;	
}
//Pop Function
int pop(){
	if(top==-1){
		return -1;
	}
	else{
		printf("%d ",stack[top]);
		return stack[top--];
	}
}
//Push Function
void push(int x){
	if(top==N-1){
		printf("Stack is full");
		return;
	}
	else{
		stack[++top] = x;
		return;
	}
}
