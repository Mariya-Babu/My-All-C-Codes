#include<stdio.h>
int main(){
	int n;
	printf("Enter the total no.of arrivals :");
	scanf("%d",&n);
//	int arr[n] = {200,210,300,320,350,500};
//	int d[n] = {230,320,340,400,430,520};
	int arr[n];
	int d[n];
	int m[10];
	m[20];
	printf("Enter the arrival timing's in an array :");
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the deperture timing's  in an array : ");
	for(int i=0;i<n;i++){
		printf("d[%d] : ",i);
		scanf("%d",&d[i]);
	}
	//selection sort
	for(int i=0;i<n-1;i++){
		int min_indx = i;
		for(int j=i+1;j<n;j++){
			if(d[j]<d[min_indx]){
				min_indx = j;
			}
		}
		int temp = d[i];
		d[i] = d[min_indx];
		d[min_indx] = temp;
	}
	int plat=0,k=0;
	for(int i=0;i<n;i++){
		if(arr[i]<d[k]){
			plat++;
		}
		else{
			k++;
		}
	}
	printf("The minimum no.of platforms required are : %d ",plat);
}
