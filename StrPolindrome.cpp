#include<stdio.h>
#include<string.h>
void isPolindrome(char*);
int main(){
	char str[50];
	printf("Enter a string : ");
	scanf("%s",str);
	isPolindrome(str);
}
void isPolindrome(char *e){
	int i=0;
	char temp[50];
	int result;
	while(*e!='\0'){
		if(*e>=48 && *e<=57){
			temp[i++] = *e;
		}
		else if(*e>=97 && *e<=122){
			temp[i++] = *e;
		}
		else if(*e>=65 && *e<=90){
			temp[i++] = *e;
		}
		e++;
	}
	if(strcmp(temp,strrev(temp)==0)){
		printf("given string is polindrome ");
	}
	else{
		printf("given string is not a polindrome ");
	}
}
