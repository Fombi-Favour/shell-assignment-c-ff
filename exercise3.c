#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int fd, fd1;
	ssize_t ret1, ret2;
	
	if(((fd = open(argv[1], O_RDONLY)) == -1) || ((fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)){
		perror("file problem");
		exit(1);
	}
}
