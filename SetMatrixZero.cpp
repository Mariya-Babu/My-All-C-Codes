//C Proramme to set matrix to zero 
#include<stdio.h>
//Function Declaration
int read();
int ROW=0;
int COL=0;
//Structure definition
struct mat{
	int row[ROW];
	int col[COL];
};
int main(){
	read();
	printf("Enter matrix element's : ");
	int m[ROW][COL];
	struct mat ex;
	for(int i=0;i<ROW;i++){
		ex.row[i] =0;
		for(int j=0;j<COL;j++){
			printf("m[%d][%d] : ",i,j);
			scanf("%d",&m[i][j]);
			if(m[i][j]==0){
				ex.row[i] = 1;
				ex.col[j] = 1;
			}
		}
		printf("Matrix before modification : ");
		for(int i=0;i<ROW;i++){
			for(int j=0;j<COL;j++){
				printf("%d ",m[i][j]);
			}
			printf("%\n");
		}
		for(int i=0;i<ROW;i++){
			if(ex.row[i]==1){
				for(int j=0;j<COL;j++){
					m[i][j] =0;
				}		
			}
		}
		for(int j=0;j<COL;j++){
			if(ex.col[j]==1){
				for(int i=0;i<ROW;i++){
					m[i][j] = 0;
				}
			}
		}
		printf("Matrix After Modification ");
		for(int i=0;i<ROW;i++){
			for(int j=0;j<COL;j++){
				printf("%d ",m[i][j]);
			}
			printf("%\n");
		}
	}
	
}

//Read Matrix size
int read(){
	int row,col;
	printf("Enter the size of the row : ");
	scanf("%d",&row);
	printf("Enter the size of the col : ");
	scanf("%d",&col);
	ROW = row;
	COL = col;	
}
