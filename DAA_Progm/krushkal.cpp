#include<stdio.h>
//Function Declaration
void display(int*,int);
void merge(int*,int,int,int);
void mergeSort(int*,int,int);
void fill_zeros(int*,int);
//Main
int main(){
	int n;
	printf("Enter the no.of nodes : ");
	scanf("%d",&n);
	int g[n][n];
	int m[n][n];
	printf("Enter the edges and their weight's : \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("g[%d][%d] : ",i,j);
			scanf("%d",&g[i][j]);
		}
		g[i][i] = 0;
	}
	//displaing the adjacency matrix of the graph
	printf("adjecent matrix of the graph is \n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",g[i][j]);
			}
			printf("\n");
	}
	// coping the edge weight's in an array 
	int a[n*n],k=0;
	fill_zeros(a,n*n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(g[i][j]!=0){
				a[k++] = g[i][j];
			}	
		}
	}
	//displaing the array 
	printf("Before sorting the array \n");
	display(a,n*n);
	mergeSort(a, 0, n*n-1);
	printf("After sorting the array ");
	display(a,n*n);
}
void fill_zeros(int a[],int size){
	for(int i=0;i<size;i++){
		a[i] = 999999;
	}
}

//merge sort algorithm
void merge(int arr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for(int i = 0; i < n1; i++){
	L[i] = arr[p + i];	
  }
  for (int j = 0; j < n2; j++){
	M[j] = arr[q + 1 + j];	
  }
  int i=0, j=0, k=p;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
	while (i < n1) {
		arr[k++] = L[i++];
	}
	while(j < n2) {
		arr[k++] = M[j++];
	}
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

// Print the array
void display(int arr[], int size) {
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);	
	}
	printf("\n");
}
