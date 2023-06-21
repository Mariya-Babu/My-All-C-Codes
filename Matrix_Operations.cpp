/* C Programme to performe all the matrix operation's */
//Header Files Section 
#include<stdio.h>
#include<stdlib.h>
//Function declaration section
int readSize(int*,int*);
int readMatrix(int,int,int**);
int display(int,int,int**);
int addition();
//Main Function 
int main(){
	printf("Matrix Operations ");
	int opt;
	while(1){
		printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.exit ");
		printf("Enter your option : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				addition();
				break;
			case 2:
				//subtraction();
				break;
			case 3:
			//	multliplication();
				break;
			case 4:
				exit(1);
			default:
				printf(" Invalid Syntax ");	
		}
	}
}
//Function to read the size of the matrix
int readSize(int* row,int *col){
	printf("Enter the no.of row's of the matrix : ");
	scanf("%d",row);
	printf("Enter the no.of col's of the matrix : ");
	scanf("%d",col);
	return 0;
}
//Function to read the matrix element's of the matrix 
int readMatrix(int row,int col,int M[][col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("M[%d][%d] = ",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	return 0;
}
//Function to display the element's of the matrix
int display(int row,int col,int M[][col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d  ",M[i][j]);
		}
		printf("\n");
	}
}
//Function to add the two given matrixes
int addition(){
	int row1,col1;
	readSize(&row1,&col1);
	int M1[row1][col1];
	printf("Enter the First matrix element's : ");
	readMatrix(M1,row1,col1);
	int row2,col2;
	readSize(&row2,&col2);
	int M2[row2][col2];
	printf("Enter the second matrix element's : ");
	readMatrix(M2,row2,col2);
	if(row1==row2 && col1==col2){
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				printf("%d  ",M1[i][j]+M2[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
