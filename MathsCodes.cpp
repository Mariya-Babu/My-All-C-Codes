#include<stdio.h>
int main(){
	int x ;
	int y ;
	printf("enter the x value :");
	scanf("%d",&x);
	printf("Enter the y value :");
	scanf("%d",&y);
	if(!((x%3==0)||(y<=10))){
		printf("The given statement is true");
	}
	else{
		printf("The given statement is false");
	}
}
