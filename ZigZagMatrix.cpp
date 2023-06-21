/* C Programme to perform the ZigZag Matrix */
#include<stdio.h>
int main(){
	printf("Enter the row size of the matrix : ");
	int row;
	scanf("%d",&row);
	printf("Enter the col size of the matrix : ");
	int col;
	scanf("%d",&col);
	int matrix[row][col];
	//Matrix input 
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("matrix[%d][%d] : ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	//Matrix display
	printf("Matrix before zigzag \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Matrix after zigzag \n");
	for(int i=0;i<row;i++){
		int k=i;
		for(int j=0;j<=i;j++){
			printf("%d ",matrix[k--][j]);
		}
		printf("\n");
	}
	for(int i=1;i<col;i++){
		int k=row-1;
		for(int j=i;j<col;j++){
			printf("%d ",matrix[k--][j]);
		}
		printf("\n");
	}
}
