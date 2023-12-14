//C Programme to implement the FCFS Disk Scheduling algorithm
#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\nFCFS Disk Scheduling Algorithm implementation ");
	int tracks,n,head,seek_time = 0;
	printf("\nEnter no.of tracks in the disk : ");
	scanf("%d",&tracks);
	printf("\nEnter length of the request queue : ");
	scanf("%d",&n);
	int request_queue[n];
	printf("\nEnter the request queue elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&request_queue[i]);
	}
	printf("\nEnter the header : ");
	scanf("%d",&head);
	
	seek_time = abs(request_queue[0]-head);
	for(int i=1;i<n;i++){
		seek_time += abs(request_queue[i-1] - request_queue[i]);
	}
		
	printf("\nThe seek time for given request queue is : %d",seek_time);
	
}

//Hello world Mariya Babu here
