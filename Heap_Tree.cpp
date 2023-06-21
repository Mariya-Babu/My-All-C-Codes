/* C Programme to perform the MaxHeap Sort */
//HeaderFiles
#include<stdio.h>
//Function Declaration
void display(int*,int);
int insert(int*,int);
int check_heap(int*,int);
int deletion(int*);
int rearrange_heap(int*,int);
int swap(int*,int*);
int max(int*,int,int);
//Global Variables
int size = -1;
//Main
int main(){
	int n;
	printf("Enter the length of the tree : ");
	scanf("%d",&n);
	int heap[n];
	printf("Enter the heap tree element's : ");
	for(int i=0;i<n;i++){
		printf("Element %d : ",i);
		scanf("%d",&heap[i]);
		insert(heap,i);
	}
	display(heap,size);
	deletion(heap);
	printf("After Deletion...");
	display(heap,size);
}
//display
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
//insert
int insert(int heap[],int i){
	size++;
	check_heap(heap,i);
}
//check_heap
int check_heap(int heap[],int n){
	if(n>0){
		int x = (n-1)/2;
		if(heap[n]>heap[x]){
			swap(&heap[n],&heap[x]);
			check_heap(heap,x);
		}
	}
}
//Deletion
int deletion(int heap[]){
	heap[0] = heap[size];
	size--;
	rearrange_heap(heap,0);
}
//Rearrage fuction
int rearrange_heap(int heap[],int n){
	int x = max(heap,(2*n+1),(2*n+2));
	if(heap[n]<heap[x]){
		swap(&heap[n],&heap[x]);
		rearrange_heap(heap,x);
	}
}
//max function
int max(int heap[],int a,int b){
	if(heap[a]>=heap[b]){
		return a;
	}
	else{
		return b;
	}
}
//swap
int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
