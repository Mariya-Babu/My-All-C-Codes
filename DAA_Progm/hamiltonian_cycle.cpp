//C Programme to Performe the Hamiltonian cycle 
//Header Files
#include<stdio.h>
//Function Declaration
int Hamiltonian(int*,int);
void display(int*,int);
//Global Declaration
int const R = 5 , C = 5;
int G[R][C] = { {0,1,0,0,1},
				{1,0,1,1,1},
				{1,1,0,1,0},
				{0,1,1,0,1},
				{1,1,0,1,0}	
};
//Main
int main(){
	int x[R],k=1;
	for(int i=0;i<R;i++){
		x[i] = -1;
	}
	x[0] = 0;
	Hamiltonian(x,k);
	display(x,R);
}
//Display
void display(int *x,int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
//Hamiltonian Cycle 
int Hamiltonian(int *x,int k){
	if(k==R){
		return 1;
	}
	for(int i=0;i<R;i++){
		int t = 0;
		for(int j=0;j<k;j++){
			if(x[j]==i){
				t = 1;
				break;
			}
		}
		if(t==1){
			continue;
		}
		if(G[x[k-1]][i]==1){
			x[k] = i;
			Hamiltonian(x,k+1);
		}
		else{
			continue;
		}
	}
}

