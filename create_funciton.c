#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int fd = creat("newfile.txt", 0644);

	if (fd == -1)
	{
		perror("Error creating file");
		return (1);
	}

	printf("File 'newfile.txt' created successfully \n"
			"File descriptor: %d\n", fd);

	close(fd);
}
