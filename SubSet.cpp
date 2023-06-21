#include<stdio.h>
#include<math.h>
int binary(int*,int,int);
int main(){
	char arr[] = {'a','b','c','d','e'};
	int num = 0;
	int n = 5;
	int bin[5];
	int count = pow(2,n);
	for(int i=0;i<count;i++){
		binary(bin,i,n);
		printf("{");
		for(int j=0;j<n;j++){
			if(bin[j]==1){
				printf("%c,",arr[j]);
			}
		}
		num++;
		printf("}");
		printf("\n\n");
	}
	printf("The no.of subset's  are %d ",num);
}
//Function for binary form
int binary(int bin[],int i,int n){
	for(int j=0;j<n;j++){
		bin[j] = i%2;
		i = i/2 ;
	//	printf("%d\t",bin[j]);
	}
	//printf("\n");
	return 0;
}


