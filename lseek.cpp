#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	off_t offset;
	off_t newOffset;
	
	int fd = open("Demo.txt",O_RDONLY | O_CREAT , 0666);
	
	offset = lseek(fd,0,SEEK_CUR);
	newOffset = lseek(fd,9,SEEK_SET);
	
	
	close(fd);
}

//offset = lseek(fd,0,SEEK_CUR);
//newOffset = lseek(fd,50,SEEL_SET);
