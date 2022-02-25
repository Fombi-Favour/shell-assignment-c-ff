#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

	int name_fd;
	name_fd = open("passage.txt", O_RDONLY);
	
	//Writing half of the contents into another file
	int half1;
	half1 = open("half1.txt", O_WRONLY);
	
	int len = 1264;
	int hlen = len / 2;
	char buf[len];
	char buf1[hlen];
	ssize_t r, nr;
	
	while((r = read(name_fd, buf, len)) > 0){
		nr = write(half1, buf1, r);
	}
	
	
	//Writing another half of th contents
	
	
	close(name_fd);
	close(half1);
}
