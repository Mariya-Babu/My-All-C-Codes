/* C Programme to convert upper case letters to lower case letters in a given string */
#include<stdio.h>
// Function to convert upper case to lower case
char* strlwr(char *str){
	static char string[50];
	for(int i=0;str[i]!=NULL;i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] = str[i] + 32;
		}
		string[i] = str[i];
	}
	return string;
}
int main(){
	char str[50],*newstr;
	printf("Enter a string to convert upper case to lower case :");
	gets(str);
	newstr = strlwr(str);
	printf("The new sting is %s",newstr);
}
