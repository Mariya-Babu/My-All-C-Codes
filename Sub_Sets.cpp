/* C rogramme to perform the basic array operations */
//Header Files Section
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Function definition section
int readSize(int*);
int readElements(int*,int);
int display(int*,int);
int binary(int*,int,int);
int subsets(int*,int);
void combinationUtil(int*, int*, int, int, int, int);
void printCombination(int*, int, int);
//Main Function
int main(){
	int n;
	readSize(&n);
	int arr[n];
	readElements(arr,n);
	display(arr,n);
	int opt,r;
	while(1){
		printf("\n1.All subset's  \n2.subset's with r element's  \n3.exit ");
		printf("Enter your option : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				subsets(arr,n);
				break;
			case 2:
				printf("Enter r value : ");
				scanf("%d",&r);
				printCombination(arr,n,r);
				break;
			case 3:
				exit(1);
			default:
				printf("  Invalid  ");
		}
	}
	
}
//Function to read the size of the array 
int readSize(int *n){
	printf("Enter the size of the array : ");
	scanf("%d",n);
}
//Function to read the array element's 
int readElements(int arr[],int n){
	printf("Enter the array Element's ");
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//Function to display the array element's 
int display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
//Function to print all possible subset's of the given array
int subsets(int arr[],int n){
	int bin[n];
	int val = pow(2,n);
	int count = 0;
	for(int i=0;i<val;i++){
		binary(bin,i,n);
		int com = 0;
		printf("{");
		for(int j=0;j<n;j++){
			if(bin[j]==1){
				if(com!=0){
					printf(",");
				}
				printf("%d",arr[j]);
				com++;
			}
		}
		count++;
		printf("}");
		printf("\n\n");
	}
	printf("The number of subset's of the given array is %d ",count);
}
//Function to convert the integer into  binary form
int binary(int bin[],int i,int n){
	for(int j=0;j<n;j++){
		bin[j] = i%2;
		i = i/2 ;
	}
	return 0;
}
//Function for print the printCobination of r element's 
void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
//combinationUtil function 
void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{
    if (index == r)
    {
    	printf("{");
        for (int j=0; j<r; j++){
        	printf("%d", data[j]);
        	if(j<r-1){
        		printf(",");
			}
		}
        printf("}");
        printf("\n");
        return;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

