#include<stdio.h>
void display(int*,int);
//heap function
void heapify(int a[],int n ,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && a[left]>a[largest]){
     largest=left;
 	}
     if(right<n && a[right]>a[largest]){
     largest=right;
 	}
     if(largest!=i){
     	int temp=a[i];             
     	a[i]=a[largest];
     	a[largest]=temp;
     	heapify(a,n,largest);
	 }
}
//heap sort function
void heapSort(int a[],int n){
	int i;
	for(i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	printf("\nArray after heapify\n");
	display(a,n);
	for(i=n-1;i>=0;i--)	{
		int temp=a[0];          
			a[0]=a[i];
			a[i]=temp;
		heapify(a,i,0);
	}
}
//display function
void display(int array[],int n){
	int i;
	for(i=0;i<n;++i){
		printf("  %d ",array[i]);
	}
}
//main function
int main(){
	int i,n;
	printf("Enter the size of the Array:");
	scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++){
	    printf("Enter array of %d Elements :",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting by using Max heap method ::");
	display(a,n);
 	printf("\n After sorting by using Max heap method ::");
 	heapSort(a,n);
 	display(a,n);
 	return 0;
}

