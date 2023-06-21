#include<stdio.h>
void printfun(int*);
int main(){
	int a[] = {1,2,3,4};
	printfun(a);
}
void printfun(int* arr){
	for(int i=0;i<4;i++){
		printf("%d ",arr[i]);
	}
}
