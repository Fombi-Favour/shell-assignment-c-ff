#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	const char *file1 = argv[1];
	const char *file2 = argv[2];
	int fd, fd1;
	ssize_t ret1, ret2;
	int len = 191;
	char buf[len];
	
	fd = open(file1, O_RDONLY);
	fd1 = open(file2, O_CREAT | O_WRONLY);
	
	if((fd == -1) || (fd1 == -1)){
		perror("file problem");
		printf("Error....\n");
	}
	
	while ((ret1 = read(fd, buf, len)) > 0){
		ret2 = write(fd1, buf, (ssize_t) ret1);
	}
	
	close(fd);
	close(fd1);
}

