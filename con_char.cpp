#define N 20
void push(char);
char pop();
char stack[N];
int top = -1;
char consective_char(char *e){
	int i=0;
	while(e[i]!='\0'){
		if(e[i]==stack[top]){
			pop();
			push(e[i]);
		}
		else{
			push(e[i]);
		}
		i++;
	}
	display();
}
void push(char x){
	if(top==N){
		return;
	}
	stack[++top] = x;
}
char pop(){
	if(top==-1){
		return '\0';
	}
	return stack[top--];
}
