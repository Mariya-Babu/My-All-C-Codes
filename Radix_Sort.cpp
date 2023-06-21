#include<stdio.h>
int main(){
	int arr[] = {10,2323,348,949,622,834,6757};
	int n = 7,i=0;
	int max = 0;
	int temp = 0,rem = 0;
	while(i<n&&max<9){
		temp = arr[i];
		while(temp!=0){
			rem = temp%10;
			if(rem>max){
				max = rem;
			}
			temp = temp/10;
		}
		i++;
	}
	\
}
