/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 8
       programme Number : 1
  programme Description : C Programme to implement Heap Sort Algorithm using Max Heap method  
 				   Date : 6/21/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files
#include <stdio.h>
int size = 0,i;
//Swap Function 
void swap(int *a, int *b){
  int temp = *b;
  *b = *a;
  *a = temp;
}
//Heapify Function 
void heapify(int array[], int size, int i){
  if (size == 1){
    printf("Single element in the heap");
  }
  else{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && array[l] > array[largest])
      largest = l;
    if (r < size && array[r] > array[largest])
      largest = r;
    if (largest != i){
      swap(&array[i], &array[largest]);
      heapify(array, size, largest);
    }
  }
}
//Insertion Function 
void insert(int array[], int newNum){
  if (size == 0){
    array[0] = newNum;
    size += 1;
  }
  else{
    array[size] = newNum;
    size += 1;
    for ( i = size / 2 - 1; i >= 0; i--){
      heapify(array, size, i);
    }
  }
}
//Function to delete the RootData 
void deleteRoot(int array[], int num){
  int i;
  for (i = 0; i < size; i++){
    if (num == array[i])
      break;
  }

  swap(&array[i], &array[size - 1]);
  size -= 1;
  for (i = size / 2 - 1; i >= 0; i--){
    heapify(array, size, i);
  }
}
//Function to print the array element's 
void printArray(int array[], int size){
  for ( i = 0; i < size; ++i)
    printf("%d ", array[i]);
  printf("\n");
}
//Main Function 
int main(){
  int array[10];
  insert(array, 3);
  insert(array, 4);
  insert(array, 9);
  insert(array, 5);
  insert(array, 2);
  printf("Max-Heap array: ");
  printArray(array, size);
  deleteRoot(array, 4);
  printf("After deleting an element: ");
  printArray(array, size);
}
