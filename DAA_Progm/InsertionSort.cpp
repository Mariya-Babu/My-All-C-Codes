//C programme to implement Insertion Sort
#include<stdio.h>
int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array element's : ");
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	//Insertion Sort start here
	int key;
	for(int i=1;i<n;i++){
		key = arr[i];
		int gap =i;
		for(int j=i-1;j>=0;j--){
			if(arr[j]>key){
				arr[j+1] = arr[j];
			}
			else{
				gap = j+1;
				break;
			}
		}
		arr[gap] = key;		
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
