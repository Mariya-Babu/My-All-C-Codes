/* C Programme To implent the SortTechniques */
//HeaderFiles Section
#include<stdio.h>
#include<stdlib.h>
//Function Declaration
int BubbleSort(int*,int*,int);
int SelectionSort(int*,int*,int);
int InsertionSort(int*,int*,int);
int swap(int*,int*);
int read(int*,int);
int display(int*,int);
//Main Function
int main(){
	int i = 1;
	while(i==1){
		int val[2]; 
		int n;
		printf("Enter the size of the array : ");
		scanf("%d",&n);
		int arr[n];
		read(arr,n);
		printf("Array Before Sorting...");
		display(arr,n);
			int opt;
			printf("\n1.BubbleSort\n2.SelectionSort\n3.InsertionSort\n4.exit\n");
			printf("Enter your option..");
			scanf("%d",&opt);
			switch(opt){
				case 1:
					BubbleSort(arr,val,n);
					break;
				case 2:
					SelectionSort(arr,val,n);	
					break;
				case 3:
					InsertionSort(arr,val,n);
					break;
				case 4:
					exit(1);
				default:
					printf("Invalid");
			}
			printf("Array after Sorting...");
			display(arr,n);
		printf("If you want to continue enter 1");
		scanf("%d",&i);
	}
}
int read(int arr[],int n){
	printf("Enter the array Elements ");
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}	
}
//Display
int display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
//Buble Sort
int BubbleSort(int arr[],int val[],int n){
	int sc = 0,com = 0;
	for(int i=0;i<n-1;i++){
		int flag = 0;
		for(int j=0;j<n-(i+1);j++){
			com++;
			if(arr[j+1]<arr[j]){
				swap(&arr[j+1],&arr[j]);
				sc++;
				flag++;
			}
		}
		if(flag==0){
			val[0] = sc;
			val[1] = com;
			return 1;
		}
	}
}
//SelectionSort
int SelectionSort(int arr[],int val[],int n){
	int sc = 0,com = 0;
	int min_index = 0;
	for(int i=0;i<n;i++){
		min_index = i;
		for(int j=i+1;j<n;j++){
			com++;
			if(arr[min_index]>arr[j]){
				min_index = j;
			}
		}
		sc++;
		swap(&arr[i],&arr[min_index]);
	}
	val[0] = sc;
	val[1] = com;
}
//Insertion
int InsertionSort(int arr[],int val[],int n){
	int sc=0,com=0;
	int key;
	for(int i=1;i<n;i++){
		key = arr[i];
		int gap =i;
		for(int j=i-1;j>=0;j--){
			com++;
			if(arr[j]>key){
				sc++;
				arr[j+1] = arr[j];
			}
			else{
				sc++;
				gap = j+1;
				break;
			}
		}
		arr[gap] = key;		
	}
	val[0] = sc;
	val[1] = com;
}
//Swap
int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
