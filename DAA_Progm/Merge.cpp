//C Programme to performe Merge Sort 
//HeaderFiles
#include<stdio.h>
//Function Decleration
int read(int*,int);
void display(int*,int);
int mergesort(int*,int,int,int);
int merge(int*,int,int,int,int);
//Main 
int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	int arr[n];
	read(arr,n);
	printf("Array before sorting...\n");
	display(arr,n);
	mergesort(arr,0,n-1,n);
	printf("Array after sorting...\n");
	display(arr,n);
}
int read(int arr[],int n){
	for(int i=0;i<n;i++){
//		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//display 
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
//merge sort
int mergesort(int arr[],int s,int e,int n){
	if(s<e){
		int mid =(s+e)/2;
		mergesort(arr,s,mid,n);
		mergesort(arr,mid+1,e,n);
		merge(arr,s,mid,e,n);
	}
}
//merge
int merge(int arr[],int s,int mid,int e,int n){
	int i=s,j=mid+1,k=s;
	int b[n];
	while(i<=mid && j<=e){
		if(arr[i]<=arr[j]){
			b[k++] = arr[i++];
		}
		else{
			b[k++] = arr[j++];
		}
	}
	if(i<=mid){
		while(i<=mid){
			b[k++] = arr[i++];
		}
	}
	else{
		while(j<=e){
			b[k++] = arr[j++];
		}
	}
	for(int i=s;i<=e;i++){
		arr[i] = b[i];
	}
}
