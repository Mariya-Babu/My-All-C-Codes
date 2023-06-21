//C Programme to swap to numbers using pointer's
#include<stdio.h>
int swap(int*,int*);
int main(){
	int a = 10;
	int b = 20;
	printf("Value's of a and b before swap \n");
	printf("a = %d , b = %d ",a,b);
	swap(&a,&b);
	printf("\nValue's of a and b after swap \n");
	printf("a = %d , b = %d ",a,b);
}
int swap(int *p,int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}
