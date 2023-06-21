/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 6
  programme Description : 2
  programme Description : C Programme to implement Merge Sort  
 				   Date : 8/2/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Headfiles section 
#include<stdio.h>
//Funcntion definition section
int read(int*,int);
int display(int*,int);
int MergeSort(int*,int,int);
int merge(int*,int,int,int);
//Main Function
int main(){
	printf(" MergeSort Technique \n");
	int n;
	printf("Enter the array size :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("\nArray before sorting \n");
	display(arr,n);
	printf("\nArray after sorting \n");
	MergeSort(arr,0,n-1);
	display(arr,n);
}
//Read function 
int read(int arr[],int n){
	int i;
	printf("\nEnter array element's :\n");
	for(i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	return 0;
}
//Display function
int display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
//MergeSort function 
int MergeSort(int arr[],int s,int e){
	int mid = (s+e)/2;
	if(s<e){
		MergeSort(arr,s,mid);
		MergeSort(arr,mid+1,e);
		merge(arr,s,mid,e);
	}
	return 1;
}
//Merging the element's of the array 
int merge(int arr[],int s,int mid,int e){
	int b[e];
	int i=s,j=mid+1,k=s;
	while(i<=mid && j<=e){
		if(arr[i]<arr[j]){
			b[k++] = arr[i++];
		}
		else{
			b[k++] = arr[j++];
		}
	}
	if(i>mid){
		while(j<=e){
			b[k++] = arr[j++];
		}
	
	}
	else{
			while(i<=mid){
				b[k++] = arr[i++];
			}
		}
	for(i=s;i<=e;i++){
		arr[i] = b[i];
	}
	return 0;
}
