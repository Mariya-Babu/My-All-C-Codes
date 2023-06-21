//C Programme to perform the matrix multiplication by stnassen's Matrix Multiplication
//Header Files Section
#include<stdio.h>
//global variable's
int ROW;
int COL;
//read
void read(int *m,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("m[%d][%d] = ",i,j);
			scanf("%d",(m+i*c)+j);
		}
	}
}
//display
void display(int *m,int r,int c){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("%d ",*((m+i*c)+j));
			}
			printf("\n");
	}
}
//matrix multiplication
int mm(int *m1,int *m2,int *m3,int rs,int re,int cs,int ce,int n){
	if(re-rs<=1 && ce-cs<=1){
		
	}
	mm(m1,m2,m3,rs,re/2,cs,ce/2,n/2);
	mm(m1,m2,m3,rs,re/2,ce/2+1,ce,n/2);
	mm(m1,m2,m3,re/2+1,re,cs,ce/2,n/2);
	mm(m1,m2,m3,lre/2+1,re,ce/2+1,ce,n/2);
}
//matrix subtraction
int ma(int *m1,int *m2,int *m3,int rs,int re,int cs,int ce){
	for(int i=rs;i<re;i++){
		for(int j=cs;j<ce;j++){
			*((m3+i*ce)+j) = *(m3)
		}
	}
}
//main
int main(){
	int row,col;
	//int row2,col2;
	//first matrix details 
	
	printf("Enter  matrix size : ");
	printf("\nEnter the no.of rows : ");
	scanf("%d",&row);
	printf("\nEnter the no.of cols : ");
	scanf("%d",&col);
	int m1[row][col];
	printf("\nEnter first matrix details : \n");
	read((int *)m,row,col);
	printf("\n Matrix 1 : \n");
	display((int *)m,row,col);
	
	//second matrix details 
//	printf("Enter second matrix size : ");
//	printf("\nEnter the no.of rows : ");
//	scanf("%d",&row2);
//	printf("\nEnter the no.of cols : ");
//	scanf("%d",&col2);
	int m2[row][col];
	printf("\nEnter second matrix details : \n");
	read((int *)m2,row,col);
	printf("\nMatrix 2 : \n");
	display((int *)m2,row,col);
	
	//matrix multiplication 
	int m3[row][col];
	mm((int *)m1,(int *)m2,(int *)m3,0,row-1,0,col-1,row*col);
}

//Multiplication
//int mm(int *m1,int *m2,int *m3,int rs,int re,int cs,int ce,int n){
//	if(re-rs<=1 && ce-cs<=1){
//		
//	}
//	mm(m1,m2,m3,rs,re/2,cs,ce/2,n/2);
//	mm(m1,m2,m3,rs,re/2,ce/2+1,ce,n/2);
//	mm(m1,m2,m3,re/2+1,re,cs,ce/2,n/2);
//	mm(m1,m2,m3,lre/2+1,re,ce/2+1,ce,n/2);
//}
