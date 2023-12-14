#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	
	int fd = open("Demo.txt", O_CREAT | O_RDWR | O_TRUNC , 0666);
	if(fd == -1){
		perror("Error opening file.");
		return 1;
	}else{
		printf("File is opened successfully");
	}
	
	if(close(fd) == -1){
		perror("Error closing file.");
		return 1;
	}
	
	
	printf("\nFile Closed successfully.");
}

//	int fd = open("Demo.txt", O_CREAT | O_RDWR | O_TRUNC , 0666);

