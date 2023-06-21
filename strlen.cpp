/* C Programme to calculate the lenght of the given string */
#include<stdio.h>
//Function to calculate the string length
char len(char *name){
	int count = 0;
	for(int i=0;i<name[i]!=NULL;i++){
		count++;
	}
	return count;
}
//Main functionn
int main(){
	char name[50];
	int length = 0;
	printf("Enter the string :");
	gets(name);
	length = len(name);
	printf("The given string length is %d",length);
}
