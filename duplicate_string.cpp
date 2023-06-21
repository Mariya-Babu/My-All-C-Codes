#include<stdio.h>
int main(){
	printf("Enter the string : ");
	char str[50];
	gets(str);
	char temp[50];
	for(int i=0;str[i]!='\0';i++){
		temp[i] = str[i];
	}
	
	for(int i=0;str[i]!='\0';i++){
		for(int j=i+1;str[j]!='\0';j++){
			if(str[i]==str[j]){
				printf("%c",str[j]);
			}
		}
		printf("\n");
	}
}
