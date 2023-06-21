#include<stdio.h>
int sub(){
	int arr[] = {1,2,3,4,5,6};
	int n = 6;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            for(int k=j;k<(n-i)+j;k++){
                printf("%d ",arr[k]);
            }
			printf("\n");
        }
        printf("\n");
    }
}
int main(){
	sub();
}
