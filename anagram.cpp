#include<stdio.h>
void deletion(char*,int);
int main(){
	int len1=0,len2=0;
	printf("Enter a string1 : ");
	char str1[50];
	gets(str1);
	char str2[50];
	printf("Enter a string2 : ");
	gets(str2);
	char temp[50];
	int i=0,count = 0;
	while(str1[i]!='\0'){
		temp[i] = str1[i];
		i++;
	}
	temp[i] = '\0';
	//length of the first string
	i = 0;
	while(str1[i]!='\0'){
		i++;
		len1++;
	}
	//length of the first string
	i = 0;
	while(str2[i]!='\0'){
		i++;
		len2++;
	}
	//anagram string or not is checking start's here
	if(len1==len2){
		i = 0;	
		while(str2[i]!='\0'){
			count = 0;
			for(int j=0;temp[j]!='\0';j++){
				if(str2[i]==temp[j]){
					deletion(temp,j);
					count++;
				}
			}
			if(count==0){
				printf("\nThe given string is not an anagaram  ");
			}
			i++;	
		}
	}
	else{
		printf("\nThe given string is not an anagaram  ");
	}
	printf("\nThe given string is a anagram  ");
}
//function to delete the given data
void deletion(char temp[],int j){
	while(temp[j]!='\0'){
		temp[j] = temp[j+1];
		j++;
	}
}


