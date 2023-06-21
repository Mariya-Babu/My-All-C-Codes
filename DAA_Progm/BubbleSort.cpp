//C programme to implement the Bubble Sort
#include<stdio.h>
int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array element's : ");
	for(int i=0;i<n;i++){
//		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	//Bubble Sort star here
	int temp = 0, flag=0 ;
	for(int i=0;i<n;i++){
		flag = 0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag!=1){
			break;
		}
	}
	printf("Array After Sorting ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
