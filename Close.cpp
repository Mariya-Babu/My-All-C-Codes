#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	int fd = open("Demo3.txt", O_CREAT | O_RDWR | O_TRUNC, 0666);
	if(fd == -1){
		perror("File Opening | Creating Error.");
		return 1;
	}else{
		printf("Demo3.txt created successfully with descriptor : %d ",fd);
	}
	
	if(close(fd) == -1){
		printf("File closing error.");
		return 1;
	}
	printf("\nFile closed successfully.");
}

//close(fileDescriptor);
