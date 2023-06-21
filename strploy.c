#include<stdio.h>
#include<string.h>
void isPolindrome(char*);
int main(){
	char str[50];
	printf("Enter a string : ");
	gets(str);
	isPolindrome(str);
}
void isPolindrome(char *e){
	int i=0;
	//printf("%s",e);
	char temp[50];
	int result;
	int j,len=0;
	while(*e!='\0'){
		if(*e>=48 && *e<=57){
			temp[i++] = *e;
		}
		else if(*e>=97 && *e<=122){
			temp[i++] = *e;
		}
		else if(*e>=65 && *e<=90){
			temp[i++] = *e+32;
		}
		e++;
	}
	i=0;
	char temprev[50];
	while(temp[i]!='\0'){
		i++;
		len++;
	}
	i=0;
	for(j=len-1;j>=0;j--){
		temprev[i++] = temp[j];
	}
	result = 
	if(result==0){
		printf("given string is polindrome ");
	}
	else{
		printf("given string is not a polindrome ");
	}
}
