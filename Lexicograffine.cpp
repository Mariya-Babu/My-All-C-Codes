/* C Programme to perform the lexicograffine method */
#include<stdio.h>
#include<stdlib>
char* stack1[50];
char* stack2[50];
int top1 = -1;
int top2 = -1;
int main(){
	int opt;
	char str[50];
	while(1){
		printf("\n1.Enter a string 2.\nDisplay in Dictionary 3.\nExit  ");
		printf("Enter your option ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("Enter a string ...");
				gets(str);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(1);
			default:
				printf("  Invalid  ");
		}
	}
}
