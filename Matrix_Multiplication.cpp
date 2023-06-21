#include<stdio.h>
int main(){
	int row, col;
	printf("Enter the size of the row : ");
	scanf("%d",&row);
	printf("Enter the size of the col : ");
	scanf("%d",&col);
	int m1[row][col];
	int m2[row][col];
	printf("Enter First matrix element's \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("m1[%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter second matrix element's \n'");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("m2[%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	int c[row][col];
	//printf("Matrix Multiplicatis is \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			c[i][j] = 0;
			for(int k=0;k<row;k++){
				c[i][j] += m1[i][k]*m2[k][j]; 	
			}
		}
	}
	printf("Multiplication of the two matrices is : \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
