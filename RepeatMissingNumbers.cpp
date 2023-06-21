/* C Programme to implement the Repeat and missing numbers in the given array which has the element's from 1 to n; */
#include<stdio.h>
int main(){
	int arr[] = {6,4,7,1,2,7,8,9,5,};
	int n = 9;
	int i,j,k,count=0;
	int A,B;
	for(i=0;i<n-1;i++){
		count = 0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j] && i!=j){
				A = arr[i];
			}
			if(arr[j]==i+1){
				count++;
			}
		}
		if(count==0){
			B = i+1;
		}
	}
	printf("The repeated number is : %d ",A);
	printf("\nThe missing number is : %d ",B);
}
