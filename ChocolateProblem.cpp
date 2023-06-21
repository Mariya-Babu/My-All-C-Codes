/* C Programme to implement the chocolate problem GFG */
//Headfiles section 
#include<stdio.h>
//Funcntion definition section
int read(int*,int);
int display(int*,int);
int MergeSort(int*,int,int);
int merge(int*,int,int,int);
int chocolate(int*,int,int);
//Main Function
int main(){
	int index,i;
	int n,m;
	printf("Enter the array size :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	display(arr,n);
	MergeSort(arr,0,n-1);
	display(arr,n);
	printf("Enter the number of students :");
	scanf("%d",&m);
	index=chocolate(arr,m,n);
	printf("The chocolate packet's are :");
	for(i=index;i<m;i++){
		printf("%d\t",arr[i]);
	}
	int dif = arr[index+m-1] - arr[index];
	printf("The minimum difference is : %d",dif);
	
	
}
//read function to read the array element's
int read(int arr[],int n){
	int i;
	printf("\nEnter array element's :\n");
	for(i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	return 0;
}
//display function to display the array element's
int display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
//Array sorting
//Merge sort function
int MergeSort(int arr[],int s,int e){
	int mid = (s+e)/2;
	if(s<e){
		MergeSort(arr,s,mid);
		MergeSort(arr,mid+1,e);
		merge(arr,s,mid,e);
	}
}
//Merge function
int merge(int arr[],int s,int mid,int e){
	int b[e];
	int i =s ,j = mid+1 ,k = s;
	while(i<=mid && j<=e){
		while(arr[i]<arr[j]){
			b[k++] = arr[i++];
		}
		while(arr[j]<arr[i]){
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
	
}
//Function to solve the chocolate problem
int chocolate(int arr[],int m,int n){
	int i,dif,min,min_index;
	dif=min=arr[m-1]-arr[0],min_index;
	for(i=0;i<n-m;i++){
		dif = arr[m+i-1] - arr[i];
		if(dif<min){
			min = dif;
			min_index = i;
		}
	}
	return min_index;
}
