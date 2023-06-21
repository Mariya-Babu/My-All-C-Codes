//C programme to implement Selection Sort
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
	//Selection Sort start here
	int min_indx = 0,temp = 0;
	for(int i=0;i<n;i++){
		min_indx = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_indx]){
				min_indx = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_indx];
		arr[min_indx] = temp;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
