/* C Programme to perform the array rotation */
#include<stdio.h>
int read(int*,int);
int display(int*,int);
int ArrayRotation1(int*,int,int);
int ArrayRotation2(int*,int,int);
int main(){
	int n,d;
	printf("Enter the array size :");
	scanf("%d",&n);
	int a[n];
	read(a,n);
	display(a,n);
	printf("\nThe no.of element's to rotate :");
	scanf("%d",&d);
	//ArrayRotation1(a,n,d);
	ArrayRotation2(a,n,d);
	display(a,n);
}
int read(int a[],int n){
	int i=0;
	printf("Enter the array elemnt's \n");
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	return 0;
}
int display(int a[],int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int ArrayRotation1(int a[],int n,int d){
	int temp[d],i;
	for(i=0;i<d;i++){
		temp[i] = a[i];
	}
	for(i=0;i<n-d;i++){
		a[i] = a[i+d];
	}
	for(i=0;i<d;i++){
		a[n-d+i] = temp[i];
	}
}
int ArrayRotation2(int a[],int n,int d){
	int i,j,temp;
	for(i=0;i<d;i++){
		temp = a[0];
		for(j=0;j<n;j++){
			a[i] = a[i+1];
		}
		a[n-1] = temp;
	}
}
