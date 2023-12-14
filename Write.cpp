#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main(){
	int fd = open("Demo1.txt",O_CREAT | O_WRONLY | O_TRUNC, 0666);
	ssize_t byteSize;
	
	char *string = "This string is added through the write system call.";
	if(fd == -1){
		perror("Error opening the file.");
		return 1;
	}
	
	byteSize = write(fd,string,strlen(string));
	printf("Demo1.txt is completed writing successfully.");
	
}

// write(fileDescriptor,string,stringLength);
