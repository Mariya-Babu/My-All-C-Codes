#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	int fd = open("Demo2.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
	
	if(fd == -1){
		perror("Error in opening the file.");
	}else{
		printf("Demo2.txt file created successfully with file descriptor : %d ",fd);
	}
	
	close(fd);
	printf("File Closed successfully!");
}
//int fd = open(fielName,O_CREAT | O_RDONLY , 0666);
