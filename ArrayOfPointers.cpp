#include<stdio.h>
#include<conio.h>
int main(){
	char str[3][50];
	printf("Enter strings ");
	for(int i=0;i<3;i++){
		printf("Enter string %d ",i);
		gets(str[i]);
	}
	for(int i=0;i<3;i++){
		printf("\nThe string %d is %s ",i,str[i]);
	}
}
