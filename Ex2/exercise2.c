#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int fd;
	fd = open("passage.txt", O_RDONLY);
	
	if(fd > 0){
		off_t length = lseek(fd, 0, SEEK_END);
		
		lseek(fd, 0, SEEK_SET);
	
		char buf[length + 1];
		ssize_t rd = read(fd, buf, sizeof(buf) + 1);
		
		char buf1[length/2], buf2[length/2];
		
		//Splitting the file
		for(int i = 0; i <= length/2; i++){
			buf1[i] = buf[i];
		}
		buf1[length/2 + 2] = '\0';
		
		
		for(int j = length/2 + 1, k = 0; j <= length && k <= length/2 + 1; j++, k++){
			buf2[k] = buf[j];
		}
		
		char fd1[] = "half1.txt";
		char fd2[] = "half2.txt";
		
		int half1 = creat(fd1, 0744);
		int half2 = creat(fd2, 0744);
		
		
		ssize_t nr1 = write(half1, buf1, rd);
		
		ssize_t nr2 = write(half2, buf2, rd);
		
		close(half1);
		close(half2);
	}
	
	close(fd);
}
