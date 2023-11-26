/* Programme to print r combinational elements from m elements arrray */
#include<stdio.h>

void recurssion(int*,int*,int,int,int);
void display(int*,int);


int G = 0;
int main(){
	int a[5] = {1,2,3,4,5};
	int d[3] = {999,999,999};
	int n = 5;
	int r = 3;
	
	display(a,n);
	display(d,r);
	recurssion(a,d,n,r,0);
	return 0;
}

void recurssion(int *a,int *d,int n,int r, int k){
	if(r<=k){
		display(d,r);
		return;
	}
	
	display(d,k);
	for(int i=0;i<n;i++){
		int flag = 0;
		for(int j=0;j<k;j++){
			if(a[i]==d[j]){
				flag++;
				break;
			}
		}
		if(flag==0){
			d[k] = a[i];
			recurssion(a,d,n,r,k++);
		}
	}
}

void display(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
}
