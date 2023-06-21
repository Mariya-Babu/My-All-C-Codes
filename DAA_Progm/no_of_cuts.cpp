#include<stdio.h>
#include<string.h>
bool isPolindrome(char *s){
	char *rev = strrev(s);
	int x = strcmp(s,rev);
	if(x==1){
		printf("Given string is polindrome ");
	}
	else{
		printf("The given string is not a polindrome ");
	}
}
int main(){
	char s[100];
	printf("Enter the string : ");
	scanf("%s",s);
//	printf("%s",s);
	isPolindrome(s);
}
