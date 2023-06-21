#include<stdio.h>
int main(){
	int n = 6;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(j<(n-i)){
				printf("   ");
			}
			else{
				printf(" * ");
			}
		}
		printf("\n");
	}
}
