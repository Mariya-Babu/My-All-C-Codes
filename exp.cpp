#include<stdio.h>
int main(){
	int arr[0];
	printf("Enter the array value's : ");
	int i=0;
	while(i<6){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	while(i<6){
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
