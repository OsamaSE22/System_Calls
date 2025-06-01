#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

extern int errno;

int main()
{
	int fd = open("newfile.txt", O_RDONLY | O_CREAT);
	printf("fd = %d\n", fd);

	if (fd == -1)
	{
		printf("Error Number %d\n", errno);

		perror("Program");
	}
	return (0);
}
