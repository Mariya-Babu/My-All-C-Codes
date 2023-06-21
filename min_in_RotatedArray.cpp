#include<stdio.h>
int main(){
	int arr[] = {115,16,20,1,5,9,12};
	int n = 8;
	int start = 0,end = n-1;
	int mid,min = arr[0];
	while(start<=end){
		mid = (start+end)/2;
		if(arr[mid-1]>arr[mid] && arr[mid+1]>arr[mid]){
			min = arr[mid];
			break;
		}
		if(min<arr[mid]){
			min = arr[mid];
			start = mid;
		}
		else{
			min = arr[mid];
			end = mid;
		}
	}
	printf("The minimum element in the rotated sorted array is %d ",min);
}
