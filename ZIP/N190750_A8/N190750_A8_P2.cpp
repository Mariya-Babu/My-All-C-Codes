/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 8
       programme Number : 2
  programme Description : C Programme to implement Heap Sort Algorithm using Min Heap method 
 				   Date : 6/21/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files
#include<stdio.h>
#include<stdlib.h>
int HEAP_SIZE = 20;
//Structure Definition 
struct Heap{
    int *arr;
    int count;
    int capacity;
    int heap_type; // for min heap , 1 for max heap
};
typedef struct Heap Heap;
//Function Declaration 
Heap *CreateHeap(int capacity,int heap_type);
void insert(Heap *h, int key);
void print(Heap *h);
void heapify_bottom_top(Heap *h,int index);
void heapify_top_bottom(Heap *h, int parent_node);
//Main Function 
int main(){
    int i;
    Heap *heap = CreateHeap(HEAP_SIZE, 0); //Min Heap
    if( heap == NULL ){
        printf("__Memory Issue____\n");
        return -1;
    }
    for(i =9;i>0;i--)
        insert(heap, i);
    print(heap);
    return 0;
}
//Function to create the heap
Heap *CreateHeap(int capacity,int heap_type){
    Heap *h = (Heap * ) malloc(sizeof(Heap));
   //check if memory allocation is fails
    if(h == NULL){
        printf("Memory Error!");
        return 0;
    }
    h->heap_type = heap_type;
    h->count=0;
    h->capacity = capacity;
    h->arr = (int *) malloc(capacity*sizeof(int)); //size in bytes
    //check if allocation succeed
    if ( h->arr == NULL){
        printf("Memory Error!");
        return 0;
    }
    return h;
}
//Insertion Function 
void insert(Heap *h, int key){
    if( h->count < h->capacity){
        h->arr[h->count] = key;
        heapify_bottom_top(h, h->count);
        h->count++;
    }
}
void heapify_bottom_top(Heap *h,int index){
    int temp;
    int parent_node = (index-1)/2;

    if(h->arr[parent_node] > h->arr[index]){
        //swap and recursive call
        temp = h->arr[parent_node];
        h->arr[parent_node] = h->arr[index];
        h->arr[index] = temp;
        heapify_bottom_top(h,parent_node);
    }
}
void heapify_top_bottom(Heap *h, int parent_node){
    int left = parent_node*2+1;
    int right = parent_node*2+2;
    int min;
    int temp;
    if(left >= h->count || left <0)
        left = -1;
    if(right >= h->count || right <0)
        right = -1;
    if(left != -1 && h->arr[left] < h->arr[parent_node])
        min=left;
    else
        min =parent_node;
    if(right != -1 && h->arr[right] < h->arr[min])
        min = right;
    if(min != parent_node){
        temp = h->arr[min];
        h->arr[min] = h->arr[parent_node];
        h->arr[parent_node] = temp;
        heapify_top_bottom(h, min);
    }
}
//print Function 
void print(Heap *h){
    int i;
    printf("Print Heap\n");
    for(i=0;i< h->count;i++){
        printf("-> %d ",h->arr[i]);
    }
    printf("\n");
}
