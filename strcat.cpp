/* C Programme to concatinnate two strings */
#include<stdio.h>
int main(){
	char str1[100],str2[100];
	int len=0,j;
	printf("Enter the distination string :");
	gets(str1);
	printf("Enter the target string :");
	gets(str2);
	for(int k=0;str1[k]!=NULL;k++){
		len++;
	}
	j = len-1;
	for(int i=0;str2[i]!=NULL;i++){
		j++;
		while(str1[j]==NULL){
			str1[j] = str2[i];
		}
	}
	printf("The concatination of two strings is %s",str1);
}
