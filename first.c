#include<stdio.h>
#include<string.h>
int main(){
	char str[50],temp;
	int i,l;
	printf("Enter a string to reverse :");
	gets(str);
	printf("You entered string is :%s",str);
	l = strlen(str);
	for(i=0;i<(l)/2;i++){
		temp = str[i];
		str[i] = str[l-1-i];
		str[l-1-i] = temp;
	}
	printf("\nThe reverse of the string is: %s",str);
}
