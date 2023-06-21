#include<stdio.h>
int main(){
	int a = 21, b = 24;
	if(((a!=b)&&(a<=b))||(a%2==1)&&(a==b)){
		printf("I know C-Programming very well \n");
		if(((a!=b)&&(a<=b))||(a%2==1)&&(a==b)){
			printf("I am good in Mathematics \n");
		}else{
			printf("I am poor in Mathematics \n");
		}
	}
	else{
		printf("I am poor in C \n");
	}
	return 0;
}
