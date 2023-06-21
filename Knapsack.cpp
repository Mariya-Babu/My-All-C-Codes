//Fraction Knapsack Algorithm implementation 
//HeaderFiles section
#include<stdio.h>
//function declaration
void display(int*,int);
int read(int*,int);
void merge(int*,int,int,int);
void mergeSort(int*,int,int);
int greedy_fk(float*,float*,float,int);
//Main Function
int main(){
	int n;
	float k;
	printf("Enter the no.of object's : ");
	scanf("%d",&n);
	float p[n];
	float w[n];
	for(int i=0;i<n;i++){
		printf("Enter the price of %d object : ",i);
		scanf("%f",&p[i]);
		printf("Enter the weight of %d object : ",i);
		scanf("%f",&w[i]);
	}
	printf("Enter the size of the knapsack : ");
	scanf("%f",&k);
	greedy_fk(p,w,k,n);
}
//fraction knapsack Algo
int greedy_fk(float p[],float w[],float W,int n){
	float a[n],weight = 0,best=0,profit = 0;
	int j = 0;	
	float wp[n];
	//initilazation of array with zeros
	for(int i=0;i<n;i++){
		a[i] = 0;
		wp[i] = ((float)p[i])/w[i];
	}
	printf("\n The profit weight is : \n");
	for(int i=0;i<n;i++){
		printf("%f ",wp[i]);
	}
	while(weight<W){
		best = 0,j=0;
		for(int i=0;i<n;i++){
			if(wp[i]>best){
				best = wp[i];
				j = i;
			}
		}
		wp[j] = 0;
		if((float)weight+w[j]<=W){
			a[j] = 1;
		//	printf("a[%d] = %f ",j,a[j]);
			weight = weight+w[j];
		}
		else{
			a[j] = ((W-weight))/(float)w[j];
			weight = W;
			break;
		}
	}
	//after inserting the element's into the array
	printf("\nAfter inserting the element's into the array : \n");
	for(int i=0;i<n;i++){
		printf("%f ",a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		profit += a[i]*p[i];
	}
	printf("The total profit is : %f ",profit);
}
//taking the arrya element's from the user
int read(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] : ",i);
		scanf("%d",&arr[i]);
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


