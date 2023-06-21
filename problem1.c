#include<stdio.h>
int main(){
	int p,q,r;
	printf("Enter the value's of  p, q and r :'");
	scanf("%d%d%d",&p,&q,&r);
	if(((!(!p||!q)||(!p||!q))&&(!p||!q)||!(!p||!q))||(!q||r)){
		printf("True");
	}else{
		printf("False");
	}
}
