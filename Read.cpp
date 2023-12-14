#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define Buffer_Size 1024

int main(){
	int buffer[Buffer_Size];
	ssize_t bytesRead;
	int fd = open("Demo.txt", O_RDONLY , 0666);
	
	if(fd == -1){
		perror("Error opening file.");
		return 1;
	}
	
	bytesRead = read(fd,buffer,Buffer_Size);
	
	printf("the message in the file is %s ",buffer);
}

//read(filedescriptor,O_RDONLY,0666);
