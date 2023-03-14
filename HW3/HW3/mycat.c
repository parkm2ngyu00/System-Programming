/*
	학번 : 32191597
	이름 : 박민규
	작성일자 : 2022/11/01
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define MAX_BUF 64

int main(int argc, char **argv)
{
	int fd, read_size, write_size;
	char buf[MAX_BUF];

	if (argc != 2) {
		printf("error : put 1 arguments to use\n");
		exit(-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		printf("error : no file\n");
		exit(-1);
	}

	while(1) {
		read_size = read(fd, buf, MAX_BUF);
		if (read_size == 0)
			break;
		write(1, buf, read_size);
	}
	close(fd);
	return 0;
}
