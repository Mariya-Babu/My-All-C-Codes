#include<stdio.h>
int mergesort(int*,int,int);
int merge(int*,int,int,int);

int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	int lb=0,ub=9;
    mergesort(arr,lb,ub);
    for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}

int mergesort(int array[],int lb,int up){
	if(lb<up){
		int mid=(lb+up)/2;
		mergesort(array,lb,mid);
		mergesort(array,mid+1,up);
		merge(array,lb,mid,up);
	}
	return 0;
}
 
 int merge(int array[],int lb,int mid,int up){
 	int i=lb;
 	int j=mid+1;
 	int k=lb;
 	int b[up-lb];
 	while(i<=mid && j<=up){
 		if (array[i]<=array[j]){
 			b[k]=array[i];
 			i++;
		 }
		 else{
		 	b[k]=array[j];
		 	j++;
		 }
		 k++;
	 }
	 if(i>mid){
	 	while(j<=up){
	 		b[k]=array[j];
	 		j++;
	 		k++;
		 }
	}
	 else{
	 	while(i<=mid){
	 		b[k]=array[i];
	 		i++;
	 		k++;
		 }
	 }
	for(i=lb;i<=up;i++){
		array[i] = b[i];
	}	 
	return 0;
 }
