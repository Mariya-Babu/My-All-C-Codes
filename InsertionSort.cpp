#include<stdio.h>
int main(){
	int arr[]={1,7,3,9,6,2,14,8,19,21};
	int n = 10;
	int gap = 0;
	for(int i=0;i<n-1;i++){
		int val = arr[i+1];
		gap = i+1;
		int j = i;
		while(val<=arr[j]&&j>0){
			arr[j+1] = arr[j];
			gap = j;
			j--;
		}
		arr[gap] = val;
	}
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
