//Fraction Knapsack Algorithm implementation 
//HeaderFiles section
#include<stdio.h>
//function declaration
void display(int*,int);
void printArray(float*,int);
int read(int*,int);
void merge(float*,float*,float*,int,int,int);
void mergeSort(float*,float*,float*,int,int);
int greedy_fk(float*,float*,float,int);
//Main Function
int main(){
//	int v = 190750%3;
	int n;
	float k;
	printf("Enter the no.of object's : ");
	scanf("%d",&n);
	float p[n] = {35,65,180,200,10};
	float w[n] = {30,20,30,40,50};
//	for(int i=0;i<n;i++){
//		printf("Enter the price of %d object  : ",i);
//		scanf("%f",&p[i]);
//		printf("Enter the weight of %d object : ",i);
//		scanf("%f",&w[i]);
//	}
	printf("Enter the size of the knapsack : ");
	scanf("%f",&k);
	greedy_fk(p,w,k,n);
}
//fraction knapsack Algo
int greedy_fk(float p[],float w[],float W,int n){
	float a[n],weight = 0,profit = 0;
	int j = n-1;	
	float wp[n];
	//initilazation of array with zeros
	for(int i=0;i<n;i++){
		a[i] = 0;
		wp[i] = ((float)p[i])/w[i];
	}
	//printing all the array before sorting
	printf("Array's before sorting the arrays \n");
	printArray(w,n);
	printArray(p,n);
	printArray(wp,n);
	mergeSort(wp,w,p,0,n-1);
	//printing all the array after sorting 
	printf("Array's After sorting the arrays \n");
	printArray(w,n);
	printArray(p,n);
	printArray(wp,n);
	while(weight<W){
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
		j--;
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
//printArray
void printArray(float arr[],int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%f ",arr[i]);
	}
	printf("\n");
}
//merge sort algorithm
void merge(float wp[],float w[],float pr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  float L1[n1], M1[n2];
  float L2[n1],M2[n2];
  float L3[n1],M3[n2];
  for(int i = 0; i < n1; i++){
	L1[i] = wp[p + i];
	L2[i] = w[p+i];	
	L3[i] = pr[p+i];
  }
  for (int j = 0; j < n2; j++){
	M1[j] = wp[q + 1 + j];
	M2[j] = w[q+1+j];	
	M3[j] = pr[q+1+j];
  }
  int i=0, j=0, k=p;
  while (i < n1 && j < n2) {
    if (L1[i] <= M1[j]) {
      wp[k] = L1[i];
      w[k] = L2[i];
      pr[k] = L3[i];
      i++;
    } else {
      wp[k] = M1[j];
      w[k] = M2[j];
      pr[k] = M3[j];
      j++;
    }
    k++;
  }
	while (i < n1) {
		wp[k] = L1[i];
		w[k] = L2[i];
		pr[k] = L3[i];
		i++;
		k++;
	}
	while(j < n2) {
		wp[k] = M1[j];
		w[k] = M2[j];
		pr[k] = M3[j];
		k++;
		j++;
	}
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(float wp[],float w[],float p[], int l, int r){
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(wp,w,p,l, m);
		mergeSort(wp,w,p, m + 1, r);
		merge(wp,w,p, l, m, r);
	}
}

// Print the array
void display(int arr[], int size) {
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);	
	}
	printf("\n");
}


