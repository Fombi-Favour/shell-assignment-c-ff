#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){

	int name_fd;
	name_fd = open("passage.txt", O_RDONLY);
	
	int half1;
	half1 = open("half1.txt", O_WRONLY);
	
	int half2;
	half2 = open("half2.txt", O_WRONLY);
	
	int len = 1264;
	char buf[len];
	ssize_t r, nr;
	off_t ret;
	int hlen = len / 2;
	
	while((r = read(name_fd, buf, len)) > 0){
		nr = write(half1, buf, hlen);
	}
	
	close(name_fd);
	close(half1);
}
